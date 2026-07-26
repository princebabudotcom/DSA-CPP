#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * Majority Element
 * Single Number
 * Best Time to Buy & Sell Stock
 * Pow(x, n)
 */

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;

    // for (int val : nums)
    // {
    //     for (int item : nums)
    //     {
    //         if (val == item)
    //         {
    //             freq++;
    //         }
    //     }

    //     if (freq > n / 2)
    //     {
    //         return val;
    //     }
    // }

    // sort(nums.begin(), nums.end());
    // for (int i = 1; i < n; i++)
    // {
    //     if (nums[i] == nums[i - 1])
    //     {
    //         freq++;
    //     }
    //     else
    //     {
    //         freq = 1;
    //         ans = nums[i];
    //     }

    //     if (freq > n / 2)
    //     {
    //         ans = nums[i];
    //     }
    // }

    // moorseAlgorithm

    for (int i = 0; i < n; i++)
    {

        if (freq == 0)
        {
            ans = nums[i];
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

int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }

    return ans;
}

int maxProfit(vector<int> &nums)
{
    int n = nums.size();
    int maxProfit = 0;

    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (nums[j] > nums[i])
    //         {
    //             maxProfit = max(maxProfit, nums[j] - nums[i]);
    //         }
    //     }
    // }

    int BB = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > BB)
        {
            maxProfit = max(maxProfit, nums[i] - BB);
        }

        BB = min(BB, nums[i]);
    }

    return maxProfit;
}

double myPow(double x, int n)
{
    long binaryNum = n;
    double ans = 1;

    if (n < 0)
    {
        x = 1 / x;
        binaryNum = -binaryNum;
    }

    while (binaryNum > 0)
    {
        if (binaryNum % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binaryNum /= 2;
    }

    return ans;
}

int main()
{
    // ==============================
    // 1. Majority Element (LC 169)
    // ==============================
    vector<int> majority = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element : " << majorityElement(majority) << endl;

    // ==============================
    // 2. Repeat & Missing Number
    // ==============================
    vector<int> repeatMissing = {4, 3, 6, 2, 1, 1};

    // ==============================
    // 3. Merge 2 Sorted Arrays
    // ==============================
    vector<int> nums1 = {1, 4, 7, 8, 10};
    vector<int> nums2 = {2, 3, 9};

    // ==============================
    // 4. Single Number (LC 136)
    // ==============================
    vector<int> singleNumbers = {4, 1, 2, 1, 2};
    cout << "Single number : " << singleNumber(singleNumbers) << endl;

    // ==============================
    // 5. Best Time to Buy & Sell Stock (LC 121)
    // ==============================
    vector<int> stock = {7, 6, 4, 3, 1};
    cout << "Max Profit : " << maxProfit(stock) << endl;

    // ==============================
    // 6. Pow(x, n) (LC 50)
    // ==============================
    double x = 2.0;
    int n = -2;
    cout << "Pow(X , n) : " << myPow(x, n) << endl;

    return 0;
}