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

int painterPartation(vector<int> &nums, int n, int m)
{

    // min and maximu time to complete work
    int minT = nums[0];
    int maxT = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        minT = min(minT, nums[i]);
        maxT += nums[i];
    }

    // binary search
    int st = minT, end = maxT;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(nums, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    cout << "hello world\n";

    // book allocation problem
    vector<int> pages = {2, 1, 3, 4};
    vector<int> paints = {40, 30, 10, 20};
    cout << "Book Allocation problem : " << bookAllocation(pages, 4, 2) << endl;
    cout << "Painter partation problem : " << painterPartation(paints, 4, 2) << endl;
    return 0;
}