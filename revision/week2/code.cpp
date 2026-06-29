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

    return 0;
}