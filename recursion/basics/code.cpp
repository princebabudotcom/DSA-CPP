#include <iostream>
using namespace std;

void abc()
{
}

// print n to 1 numbers

void printNums(int n)
{

    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    cout << n << " "; // n
    printNums(n - 1);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{

    printNums(6);
    // factorila number

    cout << factorial(4) << endl;
    cout << sum(5) << endl;
    return 0;
}