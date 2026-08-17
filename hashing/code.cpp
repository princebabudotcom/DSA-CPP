#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void printArray(vector<int> &nums)
{
    int n = nums.size();

    unordered_map<int, int> mp;

    for (int val : nums)
    {
        mp[val]++;
    }

    for (auto &it : mp)
    {
        // if (it.second > n / 3)
        // {
        //     cout << it.first << endl;
        // }

        if (mp.find(it.first) != mp.end())
        {
            cout << it.second << endl;
        }
        // cout << it.first << ": " << it.second << endl;
    }
}

int main()
{

    vector<int> nums = {
        3,
        2,
        3};
    printArray(nums);

    return 0;
}