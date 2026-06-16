#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * Pair Sum - Brute force .
 * Optimize approch .
 * Majority Element - Brute force .
 * * Majority Element - Optimize  method.
 */

vector<int> pairSum(vector<int> &nums, int target)
{

    int n = nums.size();
    vector<int> ans;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int currentSum = nums[i] + nums[j];

        if (currentSum > target)
        {
            j--;
        }
        else if (currentSum < target)
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

int mJBrute(vector<int> &nums)
{

    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (val == el)
            {
                freq++;
            }

            // cout << el << " => " << freq << endl;
        }

        if (freq > n / 2)
        {
            return val;
        }
    }
}

int mJOptimize(vector<int> &nums)
{
    int n = nums.size();

    // sort vector - Array .

    sort(nums.begin(), nums.end());

    int freq = 1;
    int ans = nums[0];

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

int mJMooreS(vector<int> &nums)
{

    int n = nums.size();

    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            i++;
        }
        else
        {
            freq--;
        }
    }

    return ans;
}

int main()
{

    // int arr[5] = {2, 11, 15, 18, 16};
    // int target;

    // cout << "Enter Target number : ";
    // cin >> target;

    // int size = sizeof(arr) / sizeof(int);

    // int MAX_SUM = INT8_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     int currentSum = 0;
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         currentSum = arr[i] + arr[j];
    //         MAX_SUM = max(currentSum, MAX_SUM);
    //     }
    //     cout << endl;
    // }

    // Pair Sum - Using While loop O(n);

    vector<int> nums = {2, 11, 15, 16, 18};

    int target;
    cout << "Enter Target number : ";
    cin >> target;

    vector<int> result = pairSum(nums, target);

    if (result.size() == 2)
    {
        cout << "Pair Sum : " << result[0] << " + " << result[1] << endl;
    }
    else
    {
        cout << "Result not found";
    }

    // Majority ELement
    vector<int> mj = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element Using Brute force : " << mJBrute(mj) << endl;

    cout << "Majority Element Using Optimize method : " << mJOptimize(mj) << endl;

    cout << "Majority Element Using Moore's Algorithm : " << mJMooreS(mj) << endl;

    return 0;
}