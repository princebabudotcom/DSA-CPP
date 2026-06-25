#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans(2, 1);

    int st = 0, end = n - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        int currentSum = nums[st] + nums[end];

        if (currentSum == target)
        {
            ans[0] = st;
            ans[1] = end;
            return ans;
        }

        if (target > currentSum)
        {
            st++;
        }
        else if (target < currentSum)
        {
            end--;
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {2, 3, 4};

    vector<int> res = twoSum(nums, 9);

    for (int val : res)
    {
        cout << val << " ";
    }
    return 0;
}