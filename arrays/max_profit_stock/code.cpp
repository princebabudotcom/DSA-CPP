#include <iostream>
#include <vector>
using namespace std;

/*
 * Stock Buy and Sell
 * prices = [7,1,5,3,6,4] return max profit
 */

int maxProfit(vector<int> &nums)
{

    int n = nums.size();

    int MP = 0;       //  max profit intail = 0
    int BB = nums[0]; // best buy is nums[0]

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > BB)
        {
            MP = max(MP, nums[i] - BB);
        }

        BB = min(BB, nums[i]);
    }

    return MP;
}

int main()
{

    // Best buy and sell stock
    vector<int> nums = {7, 1, 5, 3, 6, 4};

    cout << "MAX profit = " << maxProfit(nums);

    return 0;
}