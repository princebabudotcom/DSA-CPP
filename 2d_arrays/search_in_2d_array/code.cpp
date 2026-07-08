#include <iostream>
#include <vector>
using namespace std;

bool search2DMatrix(vector<vector<int>> &nums, int target)
{

    // brute force
    int rows = nums.size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            if (nums[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

bool searchInRow(vector<vector<int>> &nums, int target, int row)
{
    int n = nums[0].size();
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (target == nums[row][mid])
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

bool searchMatrix(vector<vector<int>> &nums, int target)
{
    // binary search on rows
    int m = nums.size();    // rows
    int n = nums[0].size(); // cols

    int stRow = 0, endRow = m - 1;

    while (stRow <= endRow)
    {

        int midRow = stRow + (endRow - stRow) / 2;

        if (target >= nums[midRow][0] && target <= nums[midRow][n - 1])
        {
            // found row
            return searchInRow(nums, target, midRow);
        }
        else if (target >= nums[midRow][n - 1])
        {
            // down =>  right
            stRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }

    return false;
}

/*
 * 240. Search a 2D Matrix II
 * approx
 *          - incresing in rows
 *          - incresing in columns
 * r = 0 , c = n -1; last column
 * so start with matrix[r][c]
 * if (target < matrix[r][c]) c--
 * if (target )
 */

bool searchMatrix2(vector<vector<int>> &mat, int target)
{
    int m = mat.size(), n = mat[0].size();

    int r = 0, c = n - 1;

    while (c >= 0 && r < m)
    {
        if (target == mat[r][c])
        {
            return true;
        }
        else if (target < mat[r][c])
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    return false;
}

int main()
{

    vector<vector<int>> nums = {
        {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    cout << search2DMatrix(nums, 38) << endl;

    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    cout << searchMatrix2(matrix, 5);
    return 0;
}