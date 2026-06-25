#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{

    int n = nums.size();

    int mid;
    int st = 0, end = n - 1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        cout << st << " " << end << " " << mid << endl;

        if (target > nums[mid])
        {
            st = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    if (nums[mid] != target)
    {
        return mid + 1;
    }

    return -1;
}

int main()
{

    vector<int> nums = {1, 3, 5, 6};

    int tar1 = 5, tar2 = 2, tar3 = 7;

    cout << searchInsert(nums, tar2);

    return 0;
}