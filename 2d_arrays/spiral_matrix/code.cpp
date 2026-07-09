#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &nums)
{
    int m = nums.size(), n = nums[0].size();
    int sRow = 0, eRow = m - 1;
    int sCol = 0, eCol = n - 1;
    vector<int> ans;

    while (sRow <= eRow && sCol <= eCol)
    {

        // top layer
        for (int j = sCol; j <= eCol; j++)
        {
            cout << nums[sRow][j] << " ";
        }

        // right layer
        for (int i = sRow + 1; i <= eRow; i++)
        {
            if (sRow == eRow)
                break;
            cout << nums[i][eCol] << " ";
        }

        // bottom layer
        for (int j = eCol - 1; j >= sCol; j--)
        {
            if (sRow == eRow)
                break;
            break;
            cout << nums[eRow][j] << " ";
        }

        // left layer

        for (int i = eRow - 1; i >= sRow + 1; i--)
        {
            if (eCol == sCol)
                break;
            cout << nums[i][sCol] << " ";
        }

        sRow++;
        eRow--;
        sCol++;
        eCol--;
    }
}
int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // answer

    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    spiralOrder(mat);

    return 0;
}