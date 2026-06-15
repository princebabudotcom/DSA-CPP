#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (nums[i] + nums[j] == target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }

    //     cout << endl;
    // }

    // using while loop

    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];

        if (pairSum > target) // 30 > 13
        {
            j--;
        }
        else if (pairSum < target) // 13 < 30
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);

            return ans;
        }
    }
}

// Pair Sum using while loop

vector<int> PS(vector<int> nums, int target)
{

    int size = nums.size();
    int i = 0, j = size - 1;
    vector<int> ans;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];

        if (target < pairSum)
        {
            j--;
        }
        else if (target > pairSum)
        {
            i++;
        }
        else
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);

            return ans;
        }
    }
}

vector<int> MjBruteForce(vector<int> nums)
{
    vector<int> ans;
    int n = nums.size();

    for (int val : nums)
    {
        int freq = 0;
        for (int item : nums)
        {
            if (val == item)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            ans.push_back(val);
            return ans;
        }
    }
}

int MjOptimize(vector<int> nums)
{

    int n = nums.size();

    // sort
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
        {
            return ans;
        }
    }
}

int MjMooresAlgorithm(vector<int> &nums)
{
    int freq = 0, ans = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {

        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
            freq++;
        else
            freq--;
    }

    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    // pair sum using while loop and O(n) ;

    // pair Sum Using While Loop PS Function

    vector<int> res = PS(nums, target);
    cout << target << " = " << res[0] << " + " << res[1] << endl;

    // Majority Elements

    vector<int> arr = {1, 2, 2, 1, 1};

    // for (int i = 0; i < 5; i++)
    // {
    //     int freq = 0;
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             freq++;
    //         }
    //     }

    //     if (freq > 5 / 2)
    //     {
    //         cout << freq << " Of Element is = " << arr[i] << endl;
    //     }
    // }

    // Majority element using Brute force .

    cout << "Majority Element using Brute force : " << MjBruteForce(arr)[0] << endl;

    cout << "Majority Element using Optimize : " << MjOptimize(arr) << endl;

    cout << "Majoruty Element using Moore's Algorithm : " << MjMooresAlgorithm(arr) << endl;

    return 0;
}