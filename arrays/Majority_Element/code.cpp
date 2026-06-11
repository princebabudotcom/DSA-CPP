#include <iostream>
#include <vector>
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

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    // pair sum using while loop and O(n) ;
    return 0;
}