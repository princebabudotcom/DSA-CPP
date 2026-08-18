#include <iostream>
using namespace std;
#include <vector>

int fib(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

bool isSorted(vector<int> &nums, int n)
{
    if (n == 0 || n == 1)
        return true;

    return nums[n - 1] >= nums[n - 2] && isSorted(nums, n - 1);
}

int binarySearch(vector<int> &nums, int target, int st, int end)
{
}

int main()
{

    cout << fib(4) << endl;

    // is sorted
    vector<int> nums = {1, 2, 8, 4, 5};
    cout << isSorted(nums, 5);
    return 0;
}