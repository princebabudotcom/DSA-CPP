#include <iostream>
#include <vector>
using namespace std;

int evenMaxDigits(vector<int> &nums)
{
    int maxEven = 0;
    // int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     while (nums[i] > 0)
    //     {
    //         nums[i] /= 10;
    //         count++;
    //     }

    //     if (count % 2 == 0)
    //     {
    //         maxEven++;
    //     }
    // }

    for (int val : nums)
    {
        string s = to_string(val);
        s.size() % 2 == 0 ? maxEven++ : maxEven;
    }

    return maxEven;
}

int main()
{

    vector<int> nums = {12, 345, 2, 6, 7896};

    string s = to_string(nums[2]);

    cout << evenMaxDigits(nums) << " " << s.size();

    return 0;
}