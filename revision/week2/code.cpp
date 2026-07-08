#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/***********************
Today's Revision (15)
***********************/

/*
 * 1.  Majority Element LC-169
 * 2.  Single Number  LC-136
 * 3.  Stock buy and sell LC-121
 * 4.  Pow (x^n)    LC-50
 * 5. Maximum sub Array LC-53
 * 6. Container with most water LC-11
 * -----------------
 * | Binary Search |
 * ----------------
 * 7. Peak index in mountain Array LC-852
 */

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

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

    //     if (n / 2 < freq)
    //     {
    //         return nums[i];
    //     }
    // }

    // optimal solution

    int freq = 0, ans = 0;

    // most element is always freq 1 ;
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
            freq--;
    }

    return ans;
}

int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    // brute force

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             count++;
    //         }
    //     }

    //     if (count == 1)
    //         return nums[i];
    // }

    // optimal solution

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }

    return ans;
}

int maxProfit(vector<int> &nums)
{

    int n = nums.size();
    int maxProfit = 0;
    int BB = nums[0];
    // brute force

    for (int i = 1; i < n; i++)
    {

        // you can not sell previous stock
        if (nums[i] > BB)
        {
            maxProfit = max(maxProfit, nums[i] - BB);
        }

        BB = min(BB, nums[i]);
    }

    return maxProfit;
}

int PX(double x, int n)
{

    long binNum = n;
    double ans = 1;

    if (binNum < 0)
    {
        x = 1 / x;
        binNum = -binNum;
    }

    while (binNum > 0)
    {
        int rem = binNum % 2;
        if (rem == 1)
        {
            ans *= x;
        }
        binNum /= 2;
        x *= x;
    }

    return ans;
}

int maxSubArray(vector<int> &nums)
{

    int n = nums.size();
    int maxSum = INT8_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     int currentSum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         currentSum += nums[j];
    //         maxSum = max(maxSum, currentSum);
    //     }
    // }

    // using kadane's algorithm

    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int maxWater(vector<int> &nums)
{

    int maxWater = 0;

    int n = nums.size();

    // Brute force

    // for (int i = 0; i < n; i++)
    // {
    //     int currentWater = 0;

    //     for (int j = 1; j < n; j++)
    //     {
    //         int h = min(nums[i], nums[j]);
    //         int w = j - i;
    //         currentWater = w * h;
    //         maxWater = max(currentWater, maxWater);
    //     }
    // }

    // Optimal solution

    int st = 0, end = n - 1;

    while (st < end)
    {
        int h = min(nums[st], nums[end]);
        int w = end - st;
        int area = h * w;
        maxWater = max(maxWater, area);

        nums[st] < nums[end] ? st++ : end--;
    }

    return maxWater;
}

int peakIndexInMountainArray(vector<int> &nums)
{

    int n = nums.size();

    int st = 0, end = n - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid - 1]<nums[mid]> nums[mid + 1])
        {
            return mid;
        }

        if (nums[mid - 1] < nums[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{

    // 1. Majority Element

    vector<int> majority = {3, 2, 3};
    cout << "Majority Element : " << majorityElement(majority) << endl;

    // 2. Single Number
    vector<int> singleNumbers = {4, 1, 2, 1, 2};
    cout << "Single Number : " << singleNumber(singleNumbers) << endl;

    // 3. stock buy and sell
    vector<int> stocks = {7, 6, 4, 3, 1};
    cout << "Max profit to sell stock : " << maxProfit(stocks) << endl;

    // P^x
    cout << "P^x : " << PX(-2, 3) << endl;

    // Max sub array
    vector<int> subArray = {5, 4, -1, 7, 8};
    cout << "Max sub array : " << maxSubArray(subArray) << endl;

    // conatiner with most water
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Container with most water : " << maxWater(heights) << endl;

    // Binary Search

    // 7. peakIndexElement

    vector<int> peakIndexs = {0, 1, 0};
    cout << "Peak index value : " << peakIndexInMountainArray(peakIndexs);

    return 0;
}