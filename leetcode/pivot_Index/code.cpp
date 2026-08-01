#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n / 2; i++)
    {
        leftSum += nums[i];
    }

    for (int i = n - 1; i > n / 2; i--)
    {
        rightSum += nums[i];
    }

    if (leftSum == rightSum)
        return n / 2;

    return -1;
}

int main()
{
    vector<int> nums = {2, 1, -1};
    cout << pivotIndex(nums) << endl;
    cout << (3 / 3 < 1);
    return 0;
}