#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> plusOne(vector<int> &nums)
{
    int n = nums.size();

    for (int i = n - 1; i >= 0; i--)
    {

        if (nums[i] < 9)
        {
            nums[i]++;
            return nums;
        }

        nums[i] = 0;
    }
    nums.insert(nums.begin(), 1);
    return nums;
}

int main()
{

    vector<int> nums = {1, 2, 3};
    vector<int> ans = plusOne(nums);
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}