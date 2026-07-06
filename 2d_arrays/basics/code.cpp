#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }

    return false;
}

int maxRowSum(int arr[][3], int rows, int cols)
{

    int maxSum = 0;

    for (int i = 0; i < rows; i++)
    {
        int currSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currSum += arr[i][j];
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int diagonalSum(int arr[][3], int n)
{

    int DS = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                DS += arr[i][j];
            }
            else if (j == n - i - 1)
            {
                DS += arr[i][j];
            }
        }
    }

    return DS;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    // input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
        // cout << endl;
    }

    // print 2d array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // cout << matrix[i][j] << " ";
        }
        // cout << endl;
    }

    // linear search in 2D Array
    int target = 8;

    cout << linearSearch(matrix, rows, cols, target) << endl;
    cout << "Max Row sum = " << maxRowSum(matrix, rows, cols) << endl;
    cout << "Sum of Diagonal Elements = " << diagonalSum(matrix, 3) << endl;

    // vectors in 2D Arrays
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // rows mat.size();

    for (int i = 0; mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}