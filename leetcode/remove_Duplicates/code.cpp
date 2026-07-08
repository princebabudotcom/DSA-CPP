#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int n = nums.size();

    int k = 1;
    for (int i = 1; i < n; i++)
    {

        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main()
{

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << removeDuplicates(nums);

    return 0;
}