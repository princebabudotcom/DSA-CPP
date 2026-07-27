#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();

    // brute force
    int maxSum = INT8_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += nums[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // optimal solution

    int sum = 0;

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

int maxArea(vector<int> &nums)
{
    int n = nums.size();
    int maxArea = 0;

    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int h = min(nums[i], nums[j]);
    //         int w = j - i;
    //         int area = h * w;
    //         maxArea = max(maxArea, area);
    //     }
    // }

    // optimal solution
    int st = 0, end = n - 1;
    while (st < end)
    {
        int h = min(nums[st], nums[end]);
        int w = end - st;
        int area = h * w;
        maxArea = max(maxArea, area);

        nums[st] < nums[end] ? st++ : end--;
    }

    return maxArea;
}

int main()
{

    // 1. maximum subArray
    vector<int> pairs = {2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subArray : " << maxSubArray(pairs) << endl;

    // 2. container wth most water
    vector<int> areas = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Contaner with most water : " << maxArea(areas) << endl;

    return 0;
}