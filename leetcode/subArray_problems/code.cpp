#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * MaxProduct subArray .
 * Continous subarray .
 * maximum sum circular Sub Array
 */

void printArray(vector<int> &nums)
{
    for (int val : nums)
    {
        cout << val << " ";
    }
}

int maxProduct(vector<int> &nums)
{

    int n = nums.size();

    int maxProd = INT8_MIN;

    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     int prod = 1;

    //     for (int j = i; j < n; j++)
    //     {
    //         prod *= nums[j];
    //         maxProd = max(maxProd, prod);
    //     }
    // }

    // optimal solution
    int idx = 0;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        int mul = nums[idx] * nums[i];

        if (mul < 0)
        {
            ans = 1;
        }
        else
        {
            idx++;
        }

        ans *= mul;
        maxProd = max(maxProd, ans);
    }
    return maxProd;
}

int maxSubarraySumCircular(vector<int> &nums)
{
    int n = nums.size();

    // brute force
    int maxSum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += nums[j];
        }
    }
}

int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();

    int ans = INT8_MAX;

    // brute force

    // brute force
    int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += nums[j];
    //         if (sum >= target)
    //         {
    //             ans = min(ans, j - i + 1);
    //             break;
    //         }
    //     }
    // }

    return ans == INT8_MAX ? 0 : ans;
}

int maxProduct(int n)
{

    vector<int> nums;

    while (n > 0)
    {
        int dig = n % 10;
        nums.push_back(dig);
        n /= 10;
    }
    sort(nums.begin(), nums.end());
}

int main()
{

    vector<int> nums = {2, 3, -2, 4};
    cout << "Max Product subArray : " << maxProduct(nums) << endl;

    cout << maxProduct(124) << endl;

    return 0;
}