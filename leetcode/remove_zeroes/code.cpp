#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int isZero = 0;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int target = 2;

    int n = nums.size();
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            ans.push_back(nums[i]);
        }
    }

    int res = nums.size() - ans.size();

    cout << res << endl;

    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}