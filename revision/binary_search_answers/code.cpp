#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
 * Split Array Largest Sum
 * Aggressive Cows
 * book allocation problem1
 */

bool isValid(vector<int> &nums, int n, int m, int allowedpages)
{
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] > allowedpages)
            return false;

        if (pages + nums[i] <= allowedpages)
        {
            pages += nums[i];
        }
        else
        {
            students++;
            pages = nums[i];
        }
    }

    return students <= m;
}

int bookAllocation(vector<int> &nums, int n, int m)
{
    //
    int minP = 0;
    int maxP = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        maxP += nums[i];
        minP = min(minP, nums[i]);
    }

    int st = 0, end = maxP;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(nums, n, m, mid))
        {
            ans = mid;
            end = mid - 1; // left search
        }
        else
        {
            st = mid + 1; // right search
        }
    }

    return ans;
}

int main()
{

    cout << "hello world\n";

    // book allocation problem
    vector<int> pages = {2, 1, 3, 4};
    cout << bookAllocation(pages, 4, 2);

    return 0;
}