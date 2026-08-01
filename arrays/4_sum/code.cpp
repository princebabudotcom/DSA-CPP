#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<vector<int>> &nums)
{
    int r = nums.size();
    int c = nums[0].size();

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << nums[i][j] << " ";
        }

        cout << endl;
    }
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
            int p = j + 1, q = n - 1;

            while (p < q)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[q];

                if (sum < target)
                {
                    p++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;

                    while (p < q && nums[p] == nums[p - 1])
                        p++;

                    while (p < q && nums[q] == nums[q + 1])
                        p++;
                }
            }

            j++;
            while (j < n && nums[j] == nums[j - 1])
                j++;
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<int> nums2 = {1, 0, -1, 0, -2, 2};
    int target2 = 0;

    vector<vector<int>> ans = fourSum(nums, target);
    // vector<vector<int>> ans = fourSum(nums2, target2);

    printArray(ans);

    return 0;
}