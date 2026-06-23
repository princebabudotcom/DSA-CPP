#include <iostream>
#include <vector>
using namespace std;

/*
 * Peak index in mountain array .
 *
 */

int peakIndexInMountainArray(vector<int> &nums)
{
    int n = nums.size();

    // int maxElement = nums[0], maxIndex = 0;
    // for (int i = 0; i < n; i++)
    // {

    //     if (maxElement < nums[i])
    //     {
    //         maxElement = nums[i];
    //         maxIndex = i;
    //     }
    // }

    int st = 0, end = n - 2;

    while (st <= end)
    {

        int mid = st + (end - st) / 2;

        // check peak index
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }

        if (nums[mid - 1] < nums[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> nums = {0, 10, 5, 2};

    cout << peakIndexInMountainArray(nums);

    return 0;
}
