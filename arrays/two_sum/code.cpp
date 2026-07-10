#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    // brute force
    for (int i = 0; i < n; i++)
    {
        for (int j = i + i; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    // better

    // optimize
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int frist = nums[i];
        int sec = target - frist;

        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
        }

        m[frist] = i;
    }

    return ans;
}

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = twoSum(nums, 9);

    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}