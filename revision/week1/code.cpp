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

int main()
{

    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Most Water : " << maxWater(heights);

    return 0;
}