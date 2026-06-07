#include <iostream>
using namespace std;

/*
 * Homework questions
 *  Que 1 : WAF to check if a prime number or not .
 *  Que 2 : WAF to print all prime numbers from 2 to N .
 *  Que 3 : WAF to print nth fibonacci series .
 */

// Que 1

int isPrime(int n)
{
    if (n < 0)
        return false;

    if (n == 1)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i < n / 2; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

/*
 *      0   0  1
 *      c   a  b  c = a + b
 *      0   1  0     1
 *      1   0  1     1
 *      1   1  1     2
 *      2   1  2     3
 *      3   2  3     5
 *      5   3  5     8
 *
 */

void fibb(int n)
{
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    // 1. isPrime

    int res = isPrime(n);

    if (res == 1)
        cout << "Prime number";
    else
        cout << "Not prime number";

    cout << endl;

    // 2. NthPrime

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            cout << i << endl;
        }
    }

    // 3. fibbnocci series

    fibb(n);

    return 0;
}