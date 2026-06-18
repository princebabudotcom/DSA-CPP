#include <iostream>
#include <vector>
using namespace std;

/*
 * nums = {1,2,3,4}    ans = {24,12,8,6}
 */

// Brute force

vector<int> productBrute(vector<int> &nums)
{

    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {

            if (i != j)
            {
                prod *= nums[j];
            }
        }
        ans.push_back(prod);
    }

    return ans;
}

// O(n) TC O(1) SC
vector<int> productOptimal(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    prefix[0] = 1;
    suffix[n - 1] = 1;

    // create prefix
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // create suffix
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // create answer
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};

    vector<int> resBrute = productBrute(nums);
    vector<int> resOptimal = productBrute(nums);

    for (int val : resOptimal)
    {
        cout << val << " ";
    }

    return 0;
}