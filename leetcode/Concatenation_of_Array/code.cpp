#include <iostream>
#include <vector>
using namespace std;

vector<int> concatArray(vector<int> &nums)
{

    int n = nums.size();
    vector<int> ans(2 * n, 1);

    // for (int i = 0; i < n; i++)
    // {
    //     ans.push_back(nums[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     ans.push_back(nums[i]);
    // }

    // Optimal

    for (int i = 0; i < 2 * n; i++)
    {
        ans[i] = (nums[i % n]);
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 3};

    vector<int> ans = concatArray(nums);

    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}