#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSumBrute(vector<int> &nums, int n)
{

    vector<int> ans(n, 1);

    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;

        for (int j = 0; j <= i; j++)
        {
            currentSum += nums[j];
        }

        ans[i] = currentSum;
    }

    return ans;
}

vector<int> runningSumOptimal(vector<int> &nums, int n)
{

    vector<int> ans(n, 1);

    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        ans[i] = currentSum;
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();

    vector<int> resB = runningSumBrute(nums, n);
    vector<int> resO = runningSumOptimal(nums, n);

    for (int val : resO)
    {
        cout << val << " ";
    }

    return 0;
}