#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int nums[] = {7, 8, 5, 3, 6, 3};
    int n = sizeof(nums) / sizeof(int);

    // pair sum

    int MAX_SUM = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i + 1; j < n; j++)
        {
            // cout << nums[i] << " " << nums[j] << endl;
            currSum = nums[i] + nums[j];

            if (currSum > MAX_SUM)
            {
                MAX_SUM = currSum;
            }
        }
        // cout << endl;
    }

    cout << MAX_SUM << endl;

    // palimdrome number

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int original = num;
    int ans = 0;

    if (num < 0)
    {
        return false;
    }

    while (num > 0)
    {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }

    cout << ans << endl;

    return 0;
}