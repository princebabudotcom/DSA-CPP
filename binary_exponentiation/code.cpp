#include <iostream>
using namespace std;

/*
 * Stock Buy and Sell
 * prices = [7,1,5,3,6,4] return max profit
 */

double myPow(double x, int n)
{

    long binForm = n;

    if (binForm < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }

        x *= x;
        binForm /= 2;
    }

    return ans;
}

int main()
{

    double x;
    int n;

    cout << "Enter a X number : ";
    cin >> x;

    cout << "Enter a N number : ";
    cin >> n;

    // X^n

    cout << myPow(x, n) << endl;

    return 0;
}