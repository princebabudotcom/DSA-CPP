#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)

{

    int n = nums.size();

    // O(n)

    int minSqr = INT8_MIN;
    int sqr = 1;
    for (int i = 0; i < n; i++)
    {

        sqr = nums[i] * nums[i];
        nums[i] = sqr;
    }

    sort(nums.begin(), nums.end());

    return nums;
}

int main()
{

    vector<int> nums = {-7, -3, 2, 3, 11};

    vector<int> res = sortedSquares(nums);

    for (int val : res)
    {
        cout << val << " ";
    }

    return 0;
}