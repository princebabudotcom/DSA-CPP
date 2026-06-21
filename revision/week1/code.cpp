#include <iostream>
#include <vector>
using namespace std;

/*
 * Container with Most water
 * Stock buy and sell
 * Compute X^n
 * Pair sum and majority Element
 * Maximum SubArray
 * Single number
 * Reverse An Array - 2 Pointer
 * Decimal to Binary and Binary to Decimal convertor
 */

// Container with most water

int maxWater(vector<int> &nums)
{
    int n = nums.size();

    int maxW = INT8_MIN;

    // brute force

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int h = min(nums[i], nums[j]);
    //         int w = j - i;
    //         int area = w *` h;
    //         maxW = max(maxW, area);
    //     }
    // }

    // optimal - 2 pointer

    int i = 0,
        j = n - 1;
    while (i < j)
    {
        int h = min(nums[i], nums[j]);
        int w = j - i;
        int area = w * h;
        maxW = max(maxW, area);

        nums[i] < nums[j] ? i++ : j--;
    }

    return maxW;
}

// Stock buy and sell

int maxProfit(vector<int> &nums)
{
    int n = nums.size();

    int maxP = 0;
    int BB = nums[0];

    // Brute force
    //     for (int i = 0; i < n; i++)
    // {

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (nums[i] > BB)
    //         {
    //             maxP = max(maxP, nums[j] - BB);
    //         }
    //         BB = min(BB, nums[j]);
    //     }
    // }

    // Optimal

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

int Xn(double x, int n)
{

    long binN = n;
    double ans = 1;

    if (binN < 0)
    {
        x = 1 / x;
        binN = -binN;
    }

    while (binN > 0)
    {
        if (binN % 2 == 1)
        {
            ans = ans * x;
        }
        x *= x;
        binN /= 2;
    }

    return ans;
}

int main()
{

    // conatiner with most water
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Most Water : " << maxWater(heights) << endl;

    // stcok buy and sell
    vector<int> stocks = {7, 1, 5, 3, 6, 4};
    cout << "Max profit : " << maxProfit(stocks) << endl;

    // Compute X^n
    cout << "X^n : " << Xn(-5, 3) << endl;

    return 0;
}