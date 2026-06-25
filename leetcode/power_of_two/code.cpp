#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{

    if (n == 1)
        return true;

    // int real = n;
    // int x = 2;

    // int ans = 1;
    // while (n > 0)
    // {

    //     if (ans == real && ans % real == 0)
    //     {
    //         return true;
    //     }

    //     ans *= 2;
    //     n /= 2;
    //     // x *= x;
    // }

    while (n % 2 == 0)
    {
        n /= 2;
    }

    return n == 1;
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << isPowerOfTwo(n);

    return 0;
}