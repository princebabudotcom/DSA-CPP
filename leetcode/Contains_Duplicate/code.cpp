#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    int n = nums.size();
    int count = 1;
    int maxCount = INT8_MIN;

    // brute force

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             count++;
    //             maxCount = max(maxCount, count);
    //         }
    //         else
    //         {
    //             count = 0;
    //         }
    //     }
    // }

    // Optimal solution

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            swap(nums[i - 1], nums[i]);
        }
    }

    cout << count;

    return maxCount > 1;
}

int main()
{

    vector<int> nums = {1, 2, 3, 1};

    cout << containsDuplicate(nums) << endl;

    return 0;
}