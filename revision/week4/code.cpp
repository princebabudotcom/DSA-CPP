#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 * Search in 2d array LC - 74
 * Search in 2d array 2 LC - 240
 * spiral matrix LC - 54
 * Two sum LC - 1
 * Duplicates and missing numbers
 * Majority Element
 * Maximum Subarray
 * Missing Number
 * Container With Most Water
 * Single Element in a Sorted Array LC - 540
 */

bool findTarget(vector<vector<int>> &nums, int target, int row)
{

    int m = nums[0].size();

    int st = 0, end = m - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (target == nums[row][mid])
        {
            return true;
        }
        else if (target > nums[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>> &nums, int target)
{
    int m = nums.size(), n = nums[0].size();
    int sRow = 0, endR = m - 1;

    while (sRow <= endR)
    {
        int midRow = sRow + (endR - sRow) / 2;

        if (nums[midRow][0] <= target && target <= nums[midRow][n - 1])
        {
            return findTarget(nums, target, midRow);
        }
        else if (target > nums[midRow][n - 1])
        {
            sRow = midRow + 1;
        }
        else
        {
            endR = midRow - 1;
        }
    }

    return false;
}

bool searchMatrix2(vector<vector<int>> &nums, int target)
{
    int m = nums.size(), n = nums[0].size();

    int r = 0, c = n - 1;

    while (c >= 0 && r < m)
    {
        if (target == nums[r][c])
        {
            return true;
        }
        else if (target > nums[r][c])
        {
            r++;
        }
        else
        {
            c--;
        }
    }

    return false;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    // brute force

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (nums[i] + nums[j] == target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int frist = nums[i];
        int sec = target - frist;

        if (mp.find(sec) != mp.end())
        {
            ans.push_back(i);
            ans.push_back(mp[sec]);
        }

        mp[frist] = i;
    }

    return ans;
}

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

    // int count = 0, freq = 0;
    // int ans = nums[0];
    // sort(nums.begin(), nums.end());
    // for (int i = 1; i < n; i++)
    // {
    //     if (nums[i - 1] == nums[i])
    //     {
    //         count++;
    //         freq = max(freq, count);
    //         ans = nums[i];
    //     }
    //     else
    //     {
    //         count = 0;
    //     }
    // }

    int ans = 0, freq = 0;

    for (int i = 0; i < n; i++)
    {

        if (freq == 0)
        {
            ans = nums[i];
            freq++;
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    return ans;
}

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maxSum = INT8_MIN;
    int sum = 0;

    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += nums[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    for (int i = 0; i < n; i++)
    {

        sum += nums[i];
        maxSum = max(maxSum, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;
}

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    sort(nums.begin(), nums.end());

    if (nums[n - 1] != n)
        return n;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i)
            return i;
    }

    return -1;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 4, 7},
        {6, 8, 9}};
    int target;
    cout << "Enter target number : ";
    cin >> target;

    cout << "Search matrix : " << searchMatrix(matrix, target) << endl;
    cout << "Search matrix 2 : " << searchMatrix2(matrix, target) << endl;

    // two sum
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = twoSum(nums, 13);
    for (int val : ans)
    {
        cout << val << " ";
    }

    cout << endl;

    // majority element
    vector<int> majorities = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority element : " << majorityElement(majorities) << endl;

    // maximum subArray
    vector<int> subarray = {5, 4, -1, 7, 8};
    cout << "Maximum subarray : " << maxSubArray(subarray) << endl;

    // missing number
    vector<int> missings = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Missing number : " << missingNumber(missings) << endl;
    return 0;
}