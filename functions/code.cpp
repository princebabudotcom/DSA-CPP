#include <iostream>

using namespace std;

/*
 * Functions are reusable blocks of code that perform a specific task. They allow us to break down complex problems into smaller, more manageable pieces. Functions can take input parameters, perform operations on them, and return a result. They help improve code readability, maintainability, and reusability.
 */

void greet()
{
    cout << "Hello, welcome to C++ programming!" << endl;
}

double sum(int a, int b)
{
    int s = a + b;
    return s;
}

int minOfTwo(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum << endl;
}

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << fact << endl;
}

// calculate sum of didgit of a number 145 => 1 + 4 + 5 = 10

int sumOfDigits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        sum += lastDigit;
    }

    return sum;
}

// calculate nCr binomail coefficient for n & r

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int digitfac = 0;

    int Nfac = fact(n);
    int Rfac = fact(r);

    digitfac = Nfac / (Rfac * fact(n - r));

    return digitfac;
}

int main()
{

    int num;

    greet();

    // cout << sum(5.89, 45.59) << endl;
    // cout << minOfTwo(5, 45) << endl;
    sumN(5);
    sumN(10);
    factorial(5);
    cout << double(25) / 10 << endl;

    // sum of digits

    cout << "Enter a number : ";
    cin >> num;

    cout << ("Sum of digits : ") << sumOfDigits(num) << endl;

    // nCr value

    cout << "Binomial Coefficient nCr : " << nCr(8, 2) << endl;
    return 0;
}