#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &nums, int n, int max, int k)
{
    int total = 0;
    int l = 1;

    for (int i = 0; i < n; i++)
    {
        if (total + nums[i] <= max)
        {
            total += nums[i];
        }
        else
        {
            l++;
            total = nums[i];
        }
    }

    return l <= k;
}

int splitArray(vector<int> &nums, int k)
{

    // size of array
    int n = nums.size();

    // get sum and maxSum

    int sum = 0, maxSum = INT8_MIN;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        maxSum = max(maxSum, nums[i]);
    }

    int st = maxSum, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(nums, n, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {7, 2, 5, 10, 8};
    cout << splitArray(nums, 2);

    return 0;
}