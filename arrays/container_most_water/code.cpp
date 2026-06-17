#include <iostream>
#include <vector>
using namespace std;

int maxWaterBrute(vector<int> &nums)
{
    int n = nums.size();

    int maxWT = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = j - i;
            int h = min(nums[i], nums[j]);
            int area = h * w;
            maxWT = max(maxWT, area);
        }
    }

    return maxWT;
}

int maxWater2Pointer(vector<int> &nums)
{
    int n = nums.size();
    int lp = 0, rp = n - 1;
    int MaxWater = 0;

    // jab tak right wala bada rahega
    while (lp < rp)
    {
        int w = rp - lp;
        int h = min(nums[lp], nums[rp]);
        int area = w * h;
        MaxWater = max(MaxWater, area);

        // jo height me chota hai use next height par le jayenge
        nums[lp] < nums[rp] ? lp++ : rp--;
    }

    return MaxWater;
}

int main()
{

    vector<int> wt1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Max Water in conatiner : " << maxWaterBrute(wt1) << endl;

    cout << "Max Water in conatiner : " << maxWater2Pointer(wt1) << endl;

    return 0;
}