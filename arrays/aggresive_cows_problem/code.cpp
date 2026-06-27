#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isvalid(int minAllowedDis, vector<int> &nums, int n, int c)
{

    sort(nums.begin(), nums.end());

    int lastPostion = nums[0];
    int cows = 1;

    for (int i = 1; i < n; i++)
    {

        if (nums[i] - lastPostion >= minAllowedDis)
        {
            cows++;
            lastPostion = nums[i];
        }

        if (cows == c)
            return true;
    }

    return false;
}

int minLargestDistance(vector<int> &nums, int C, int N)
{

    int n = nums.size();

    int minD = INT8_MAX, maxD = INT8_MIN;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        minD = min(minD, nums[i]);
        maxD = max(maxD, nums[i]);
    }

    int st = minD, end = maxD - minD;

    while (st <= end)
    {

        int mid = st + (end - st) / 2;

        if (isvalid(mid, nums, N, C))
        {
            ans = mid;
            st = mid + 1; // right search for max value
        }
        else
        {
            end = mid - 1; // left search for min value
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 8, 4, 9};

    cout << "max distance of aggresive cows : " << minLargestDistance(nums, 3, 5);

    return 0;
}