#include <iostream>
#include <vector>
using namespace std;

int singleNum(vector<int> &nums)
{
    int ans = 0;

    for (int val : nums)
    {
        ans = ans ^ val;
    }

    return ans;
}

int main()
{

    vector<int> vec;
    vector<char> ch = {'A', 'B', 'C', 'D', 'E', 'F'};

    // cout << vec[0];

    // for (char val : ch) // forEach loop
    // {
    //     cout << val << endl;
    // }

    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(45);

    cout << "vector size = " << vec.size() << endl;

    vec.pop_back();

    for (int i : vec)
        cout << i << endl;

    cout << vec.back() << endl;
    cout << vec.front() << endl;
    cout << vec.at(1) << endl;

    cout << "Vector size : " << vec.size() << endl;
    cout << "Vector capacity : " << vec.capacity() << endl;

    // single number

    vector<int> nums = {4, 1, 2, 2, 1, 4, 8};

    cout << singleNum(nums) << endl;

    return 0;
}