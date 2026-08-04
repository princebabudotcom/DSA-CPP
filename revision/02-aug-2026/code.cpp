#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 * Two sum
 */

void printArray(vector<int> &nums)
{
    int n = nums.size();

    for (int val : nums)
    {
        cout << val << " ";
    }

    cout << endl;
}

void print2DArray(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> twoSum(vector<int> &nums, int target)
{

    int n = nums.size();
    unordered_map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int frist = nums[i];
        int sec = target - frist;

        if (mp.find(sec) != mp.end())
        {
            ans.push_back(i);
            ans.push_back(mp[sec]);
        }

        mp[frist] = i;
    }

    return ans;
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();

    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
            }
        }
    }

    return ans;
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n;)
        {

            int m = j + 1, k = n - 1;

            while (m < k)
            {

                long long sum = (long long)nums[i] + nums[j] + nums[m] + nums[k];
                if (sum < target)
                {
                    m++;
                }
                else if (sum > target)
                {
                    k--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[m], nums[k]});
                    m++;
                    k--;

                    while (m < k && nums[m] == nums[m - 1])
                    {
                        m++;
                    }
                }
            }

            j++;
            while (j < n && nums[j] == nums[j - 1])
            {
                j++;
            }
        }
    }

    return ans;
}

int main()
{

    // two sum
    vector<int> twoSums = {2, 7, 11, 15};
    vector<int> ans = twoSum(twoSums, 9);
    printArray(ans);

    // three sum
    vector<int> threesums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans3Sum = threeSum(threesums);
    print2DArray(ans3Sum);

    // 4 sum
    vector<int> foursums = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> ans4Sum = fourSum(foursums, 0);
    print2DArray(ans4Sum);

    return 0;
}