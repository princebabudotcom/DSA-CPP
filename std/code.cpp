#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<int, int> mp;

    mp[2] = 2;

    if (mp.find(2) != mp.end())
    {
        cout << "Founded";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}