#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <unordered_map>

// DSA REVISION — 2 WEEK GAP

// 1. Two Sum
// Pattern: Hashing + Array
// Question: Find two indices whose values add up to target.

// 2. Majority Element
// Pattern: Hashing / Boyer-Moore Voting Algorithm
// Question: Find the element that appears more than n/2 times.

// 3. Best Time to Buy and Sell Stock
// Pattern: Array + Greedy
// Question: Find the maximum profit from buying and selling a stock.

// 4. Maximum Subarray
// Pattern: Kadane's Algorithm
// Question: Find the contiguous subarray with the largest sum.

// 6. 3Sum
// Pattern: Sorting + Two Pointers
// Question: Find all unique triplets whose sum is 0.

// 7. Product of Array Except Self
// Pattern: Prefix + Suffix
// Question: Return an array where each element is the product of all other elements.

// 8. Subarray Sum Equals K
// Pattern: Prefix Sum + Hashing
// Question: Find the number of continuous subarrays whose sum equals k.

void printArray(vector<int> &nums)
{
    for (int val : nums)
    {
        cout << val << " ";
    }

    cout << endl;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    // brute force

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (nums[i] + nums[j] == target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
    //     }
    // }

    // optimal solution

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int frist = nums[i];
        int sec = target - frist;

        if (mp.find(sec) != mp.end())
        {
            ans.push_back(mp[sec]);
            ans.push_back(i);
        }

        mp[frist] = i;
    }

    return ans;
}

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

    // sort(nums.begin(), nums.end());
    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     int freq = 0;

    //     for (int j = 0; j < n; j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             freq++;
    //         }
    //     }

    //     if (freq > n / 2)
    //     {
    //         return nums[i];
    //     }
    // }

    // optimal solution

    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (freq == 0)
        {
            ans = nums[i];
        }

        if (freq == ans)
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

int maxProfit(vector<int> &nums)
{
    int n = nums.size();

    int BB = nums[0];
    int maxP = 0;

    // Brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         if (nums[j] > nums[i])
    //         {
    //             maxP = max(maxP, nums[j] - BB);
    //         }

    //         BB = min(nums[j], BB);
    //     }
    // }

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > BB)
        {
            maxP = max(maxP, nums[i] - BB);
        }

        BB = min(BB, nums[i]);
    }

    return maxP;
}

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();

    // brute force

    int maxSum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum > maxSum)
            {
                maxSum = max(maxSum, sum);
            }
        }
    }

    return maxSum;
}

int maxArea(vector<int> &nums)
{
    int n = nums.size();

    // brute force
    int maxArea = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         int h = min(nums[i], nums[j]);
    //         int w = j - i;
    //         int area = h * w;
    //         maxArea = max(maxArea, area);
    //     }
    // }

    int st = 0, end = n - 1;
    while (st < end)
    {
        int h = min(nums[st], nums[end]);
        int w = end - st;
        int area = h * w;
        maxArea = max(maxArea, area);

        nums[st] > nums[end] ? end-- : st++;
    }

    return maxArea;
}

int main()
{

    // 1. Two Sum
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 13;

    vector<int> ans1 = twoSum(nums1, target1);
    printArray(ans1);

    // 2. Majority Element
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element : " << majorityElement(nums2) << endl;

    // 3. Best Time to Buy and Sell Stock
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "max Profit : " << maxProfit(prices) << endl;

    // 4. Maximum Subarray
    vector<int> nums4 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums4) << endl;

    // 5. Container With Most Water
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max area : " << maxArea(height) << endl;

    // 6. 3Sum
    vector<int> nums6 = {-1, 0, 1, 2, -1, -4};

    // 7. Product of Array Except Self
    vector<int> nums7 = {1, 2, 3, 4};

    // 8. Subarray Sum Equals K
    vector<int> nums8 = {1, 1, 1};
    int k = 2;

    return 0;
}