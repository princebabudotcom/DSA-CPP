#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

void print2DArray(vector<vector<int>> nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[0].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> twoSum(vector<int> &nums, int target)
{

    int n = nums.size();
    vector<int> ans;

    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (nums[i] + nums[j] == target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
    //     }
    // }

    // using hasing

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int frist = nums[i];
        int sec = target - frist;

        if (m.find(sec) != m.end())
        {
            ans.push_back(m[sec]);
            ans.push_back(i);
        }

        m[frist] = i;
    }

    return ans;
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    set<vector<int>> uniTri;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                }
            }
        }
    }

    return ans;
}

bool containsDuplicate(vector<int> &nums)
{

    // sort
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{

    // two sum
    vector<int> nums = {3, 3};
    vector<int> ans = twoSum(nums, 6);
    for (int val : ans)
        cout << val << " ";

    cout << endl;

    // three sum
    // vector<int> nums3 = {-1, 0, 1, 2, -1, -4};
    // vector<vector<int>> ans3 = threeSum(nums3);
    // print2DArray(ans3);

    // containts duplicates
    vector<int> numsD = {1, 2, 3, 1};
    cout << containsDuplicate(numsD) << endl;
    return 0;
}