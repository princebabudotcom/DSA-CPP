#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>> &nums, int target, int row, int cols)
{

    int st = 0, end = cols - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[row][mid] == target)
        {
            return true;
        }
        else if (target > nums[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

bool findTarget(vector<vector<int>> &nums, int target)
{
    int rows = nums.size();
    int cols = nums[0].size();

    int stRow = 0, endRow = rows - 1;

    while (stRow <= endRow)
    {
        int midRow = stRow + (endRow - stRow) / 2;

        if (nums[midRow][0] <= target && nums[midRow][cols - 1] >= target)
        {
            return search(nums, target, midRow, cols);
        }
        else if (target > nums[midRow][cols - 1])
        {
            stRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>> &nums, int target)
{
    int rows = nums.size();
    int cols = nums[0].size();

    int st = 0, end = cols - 1;

    while (st < rows && end >= 0)
    {
        if (nums[st][end] == target)
        {
            return true;
        }
        else if (nums[st][end] < target)
        {
            st++;
        }
        else
        {
            end--;
        }
    }

    return false;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    cout << "Search in matrix 1 : " << findTarget(matrix, 60) << endl;

    vector<vector<int>> matrix2 = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int target = 30;

    cout << "Search in matrix 2 : " << searchMatrix(matrix2, target) << endl;

    return 0;
}