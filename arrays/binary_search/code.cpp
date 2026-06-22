#include <iostream>
#include <vector>
using namespace std;

/*
 * mid = (st + end)/2
 * mid = st + (end - st)/2
 */

int binarySearch(vector<int> &nums, int target) // TC O(logn )
{
    int n = nums.size();

    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

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

    return -1;
}

int main()
{

    vector<int> nums = {-1, 0, 3, 4, 5, 9, 12};

    cout << "Enter target number : ";
    int n;
    cin >> n;

    cout << "Target is found at index : " << binarySearch(nums, n);

    return 0;
}