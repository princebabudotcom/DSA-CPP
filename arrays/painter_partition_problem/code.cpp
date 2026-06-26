#include <iostream>
#include <vector>
using namespace std;

/*
 * Painter partition Problem .
 */

bool isPossible(vector<int> arr, int m, int n, int maximumTimeAllowed)
{

    int painters = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maximumTimeAllowed)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }

    return painters <= m;
}

int minPaintTime(vector<int> &nums, int N, int M)
{
    int sum = 0, maxval = INT8_MIN;

    for (int i = 0; i < N; i++)
    {
        sum += nums[i];
        maxval = max(maxval, nums[i]);
    }

    int st = maxval, end = sum, ans = -1;

    while (st <= end) // log(sum)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(nums, M, N, mid))
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

    vector<int> nums = {40, 30, 10, 20};

    cout << "Minimum time to complete paint by " << 2 << " Painters : " << minPaintTime(nums, 4, 2);

    return 0;
}