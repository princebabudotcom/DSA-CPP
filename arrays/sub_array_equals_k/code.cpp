#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>

int subarraySumBrute(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if (sum == k)
                count++;
        }
    }

    return count;
}

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();

    int count = 0;
    vector<int> prefixSum(n, 0);

    prefixSum[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    unordered_map<int, int> m; // PS , Freq
    for (int j = 0; j < n; j++)
    {
        if (prefixSum[j] == k)
            count++;

        int val = prefixSum[j] - k;

        if (m.find(val) != m.end())
        {
            count += m[val];
        }

        if (m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] == 0;
        }

        m[prefixSum[j]]++;
    }

    return count;
}

int main()
{

    vector<int> nums = {9, 4, 20, 3, 10, 5};
    cout << "SubArray Sum Equals k : " << subarraySumBrute(nums, 33) << endl;

    // optimal solution
    cout << "Optimal Solution : " << subarraySum(nums, 33) << endl;

    return 0;
}