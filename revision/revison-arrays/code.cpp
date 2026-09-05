#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

/*
===========================================================
                ARRAY / VECTOR REVISION
===========================================================
*/

// 1. Majority Element
/*
Given an integer vector nums, find the element that appears
more than n/2 times.

Example:
nums = {2,2,1,1,1,2,2}
Answer = 2
*/
int majorityElement(vector<int> &nums)
{
}

// 2. Single Number
/*
Every element appears twice except one element.
Find the element that appears only once.

Example:
nums = {4,1,2,1,2}
Answer = 4
*/
int singleNumber(vector<int> &nums)
{
}

// 3. Stock Buy and Sell
/*
Given prices where prices[i] is the stock price on day i,
find the maximum profit from one buy and one sell.

Example:
prices = {7,1,5,3,6,4}
Answer = 5
*/
int maxProfit(vector<int> &prices)
{
}

// 4. Pow(x,n)
/*
Calculate x^n without directly using pow().

Example:
x = 2, n = 10
Answer = 1024
*/
double myPow(double x, int n)
{
}

// 5. Maximum Subarray
/*
Find the contiguous subarray having the largest sum.

Example:
nums = {-2,1,-3,4,-1,2,1,-5,4}
Answer = 6
*/
int maxSubArray(vector<int> &nums)
{
}

// 6. Container With Most Water
/*
Given heights of vertical lines, find two lines that form
a container containing the maximum amount of water.

Example:
height = {1,8,6,2,5,4,8,3,7}
Answer = 49
*/
int maxArea(vector<int> &height)
{
}

// 7. Two Sum
/*
Find two indices whose values add up to target.

Example:
nums = {2,7,11,15}
target = 9

Answer = {0,1}
*/
vector<int> twoSum(vector<int> &nums, int target)
{
}

// 8. Three Sum
/*
Find all unique triplets whose sum is 0.

Example:
nums = {-1,0,1,2,-1,-4}

Answer:
{-1,-1,2}
{-1,0,1}
*/
vector<vector<int>> threeSum(vector<int> &nums)
{
}

// 9. Four Sum
/*
Find all unique quadruplets whose sum equals target.

Example:
nums = {1,0,-1,0,-2,2}
target = 0

Answer:
{-2,-1,1,2}
{-2,0,0,2}
{-1,0,0,1}
*/
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
}

// 10. Search in 2D Matrix
/*
Rows are sorted and the first element of each row is greater
than the last element of the previous row.

Search for target.

Example:
matrix = {
    {1,3,5,7},
    {10,11,16,20},
    {23,30,34,60}
}

target = 3
Answer = true
*/
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
}

// 11. Search in 2D Matrix II
/*
Each row and each column is sorted.

Search for target.

Example:
matrix = {
    {1,4,7,11},
    {2,5,8,12},
    {3,6,9,16},
    {10,13,14,17}
}

target = 5
Answer = true
*/
bool searchMatrix2(vector<vector<int>> &matrix, int target)
{
}

// 12. Spiral Matrix
/*
Return all elements of a matrix in spiral order.

Example:
matrix = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
}

Answer:
{1,2,3,6,9,8,7,4,5}
*/
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
}

// 13. Reverse Integer
/*
Reverse the digits of a signed 32-bit integer.

Example:
x = 123
Answer = 321

x = -123
Answer = -321

If overflow occurs, return 0.
*/
int reverse(int x)
{
}

// 14. Peak Index in Mountain Array
/*
Find the peak index in a mountain array.

Example:
arr = {0,2,5,3,1}
Answer = 2
*/
int peakIndexInMountainArray(vector<int> &arr)
{
}

// 15. Find Peak Element
/*
Find an index of a peak element.

A peak element is greater than its neighbors.

Example:
nums = {1,2,3,1}
Answer = 2
*/
int findPeakElement(vector<int> &nums)
{
}

// 16. Search in Rotated Sorted Array
/*
A sorted array is rotated at an unknown pivot.
Find target and return its index.

Example:
nums = {4,5,6,7,0,1,2}
target = 0

Answer = 4
*/
int search(vector<int> &nums, int target)
{
}

// 17. Single Element in Sorted Array
/*
Every element appears twice except one element.
The array is sorted.

Find the single element.

Example:
nums = {1,1,2,3,3,4,4,8,8}
Answer = 2
*/
int singleNonDuplicate(vector<int> &nums)
{
}

// 18. Aggressive Cows
/*
Given stall positions and k cows, place the cows such that
the minimum distance between any two cows is maximized.

Example:
stalls = {1,2,4,8,9}
k = 3

Answer = 3
*/
int aggressiveCows(vector<int> &stalls, int k)
{
}

// 19. Allocate Minimum Pages
/*
Given pages in books and m students, allocate books
contiguously such that the maximum pages assigned to a
student is minimized.

Example:
pages = {12,34,67,90}
students = 2

Answer = 113
*/
int allocatePages(vector<int> &pages, int students)
{
}

// 20. Painter Partition
/*
Given board lengths and k painters, each painter paints
contiguous boards.

Find the minimum time required to paint all boards.

Example:
boards = {10,20,30,40}
k = 2

Answer = 60
*/
int painterPartition(vector<int> &boards, int k)
{
}

int main()
{
    cout << "========== DSA ARRAY REVISION ==========" << endl;

    // =====================================================
    // 1. Majority Element
    // =====================================================

    vector<int> majorityNums = {
        2, 2, 1, 1, 1, 2, 2};

    // majorityElement(majorityNums);

    // =====================================================
    // 2. Single Number
    // =====================================================

    vector<int> singleNums = {
        4, 1, 2, 1, 2};

    // singleNumber(singleNums);

    // =====================================================
    // 3. Stock Buy and Sell
    // =====================================================

    vector<int> prices = {
        7, 1, 5, 3, 6, 4};

    // maxProfit(prices);

    // =====================================================
    // 4. Pow(x,n)
    // =====================================================

    double x = 2.0;
    int n = 10;

    // myPow(x, n);

    // =====================================================
    // 5. Maximum Subarray
    // =====================================================

    vector<int> maxSubArrayNums = {
        -2, 1, -3, 4, -1, 2, 1, -5, 4};

    // maxSubArray(maxSubArrayNums);

    // =====================================================
    // 6. Container With Most Water
    // =====================================================

    vector<int> heights = {
        1, 8, 6, 2, 5, 4, 8, 3, 7};

    // maxArea(heights);

    // =====================================================
    // 7. Two Sum
    // =====================================================

    vector<int> twoSumNums = {
        2, 7, 11, 15};

    int targetTwoSum = 9;

    // twoSum(twoSumNums, targetTwoSum);

    // =====================================================
    // 8. Three Sum
    // =====================================================

    vector<int> threeSumNums = {
        -1, 0, 1, 2, -1, -4};

    // threeSum(threeSumNums);

    // =====================================================
    // 9. Four Sum
    // =====================================================

    vector<int> fourSumNums = {
        1, 0, -1, 0, -2, 2};

    int targetFourSum = 0;

    // fourSum(fourSumNums, targetFourSum);

    // =====================================================
    // 10. Search in 2D Matrix
    // =====================================================

    vector<vector<int>> matrix1 = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int matrixTarget1 = 3;

    // searchMatrix(matrix1, matrixTarget1);

    // =====================================================
    // 11. Search in 2D Matrix II
    // =====================================================

    vector<vector<int>> matrix2 = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int matrixTarget2 = 5;

    // searchMatrix2(matrix2, matrixTarget2);

    // =====================================================
    // 12. Spiral Matrix
    // =====================================================

    vector<vector<int>> spiralMatrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // spiralOrder(spiralMatrix);

    // =====================================================
    // 13. Reverse Integer
    // =====================================================

    int number = 123;

    // reverse(number);

    // =====================================================
    // 14. Peak Index in Mountain Array
    // =====================================================

    vector<int> mountainArray = {
        0, 2, 5, 3, 1};

    // peakIndexInMountainArray(mountainArray);

    // =====================================================
    // 15. Find Peak Element
    // =====================================================

    vector<int> peakNums = {
        1, 2, 3, 1};

    // findPeakElement(peakNums);

    // =====================================================
    // 16. Search in Rotated Sorted Array
    // =====================================================

    vector<int> rotatedNums = {
        4, 5, 6, 7, 0, 1, 2};

    int rotatedTarget = 0;

    // search(rotatedNums, rotatedTarget);

    // =====================================================
    // 17. Single Element in Sorted Array
    // =====================================================

    vector<int> sortedSingleNums = {
        1, 1, 2, 3, 3, 4, 4, 8, 8};

    // singleNonDuplicate(sortedSingleNums);

    // =====================================================
    // 18. Aggressive Cows
    // =====================================================

    vector<int> stalls = {
        1, 2, 4, 8, 9};

    int cows = 3;

    // aggressiveCows(stalls, cows);

    // =====================================================
    // 19. Allocate Minimum Pages
    // =====================================================

    vector<int> pages = {
        12, 34, 67, 90};

    int students = 2;

    // allocatePages(pages, students);

    // =====================================================
    // 20. Painter Partition
    // =====================================================

    vector<int> boards = {
        10, 20, 30, 40};

    int painters = 2;

    // painterPartition(boards, painters);

    cout << "\nRevision Questions Ready!" << endl;

    return 0;
}