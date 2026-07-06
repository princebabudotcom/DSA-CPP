#include <iostream>
#include <vector>
using namespace std;

/*
 * =========================================
 * Day 8 : Binary Search
 * =========================================
 *
 * * Peak Index in Mountain Array        -> LC #852
 * * Search in Rotated Sorted Array      -> LC #33
 * * Single Element in a Sorted Array    -> LC #540
 * * Aggressive Cows                     -> GFG / SPOJ
 * * Allocate Minimum Pages              -> GFG (Similar: LC #410)
 * * Painter's Partition                 -> GFG (Similar: LC #410)
 * * Median of Two Sorted Arrays         -> LC #4
 *
 * =========================================
 * Concepts:
 * * Binary Search
 * * Binary Search on Answer
 * * Peak Finding
 * * Rotated Sorted Array
 * * Even/Odd Index Binary Search
 * * Partition Binary Search
 * =========================================
 */

int peakIndex(vector<int> &nums)
{

    int n = nums.size();

    // brute force
    // int maxElem = nums[0];
    // int index = 0;
    // for (int i = 1; i < n; i++)
    // {

    //     if (maxElem < nums[i])
    //     {
    //         maxElem = max(maxElem, nums[i]);
    //         index = i;
    //     }
    // }

    // return index;

    // optimal solution -> two pointer

    int st = 0, end = n - 1;
    while (st < end)
    {
        int mid = st + (end - st) / 2;

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
}

// frist find left or right sorted then check target where exist right or left
int search(vector<int> &nums, int target)
{
    int n = nums.size();

    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[st] <= nums[mid])
        { // left sorted
            if (nums[st] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}

int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();

    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (mid == 0 && nums[0] != nums[1])
            return nums[mid];

        if (mid == n - 1 && nums[mid - 1] != nums[n - 2])
        {
            return nums[mid];
        }

        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        if (mid % 2 == 0)
        {

            if (nums[mid - 1] == nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (nums[mid - 1] == nums[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}
int main()
{

    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    // peak indexes element in an array

    cout << peakIndex(arr) << endl;
    cout << "Search in rotated array : " << search(arr, 0) << endl;
    cout << "Single Element in sorted array : " << singleNonDuplicate(arr) << endl;
    return 0;
}