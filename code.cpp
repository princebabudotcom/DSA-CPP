#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int x;

    cout << "Enter a number : ";
    cin >> x;

    int orginal = x;
    int reverse = 0;
    int pow = 1;
    int ans = 0;

    while (x > 0)
    {
        int rem = x % 10;
        ans += rem * pow;
        x = x / 10;
        pow *= 10;
    }

    if (ans == orginal)
    {
        return true;
    }
    else
    {
        return false;
    }

    return 0;
}