#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();

    int freq = 0;
    int maxFreq = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] == 1)
        {
            freq++;
        }
        else
        {
            freq = 0;
        }

        maxFreq = max(maxFreq, freq);
    }

    return maxFreq;
}

int main()
{

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "maximum number of consecutive 1's : " << findMaxConsecutiveOnes(nums);

    return 0;
}