#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <unordered_map>

// aggresive cows
// Intersection of two arrays
// split of larget sum

bool isValid(int minAllowedDistance, vector<int> &nums, int n, int c)
{
    sort(nums.begin(), nums.end());
    int lastP = nums[0];
    int cows = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] - lastP >= minAllowedDistance)
        {
            cows++;
            lastP = nums[i];
        }

        if (cows == c)
            return true;
    }

    return false;
}

int aggresiveCows(vector<int> &nums, int c, int n)
{

    int minD = INT8_MAX, maxD = INT8_MIN;
    int ans = -1;

    // find minD and MaxD

    for (int i = 0; i < n; i++)
    {
        minD = min(minD, nums[i]);
        maxD = max(minD, nums[i]);
    }

    // using binary search
    int st = 0, end = maxD - minD;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(mid, nums, n, c))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
}

int main()
{

    cout << "hello world" << endl;
    vector<int> nums = {1, 2, 8, 4, 9};
    cout << aggresiveCows(nums, 3, 5);

    return 0;
}