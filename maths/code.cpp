#include <iostream>
#include <vector>
using namespace std;

string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return "Non Prime";
    }

    return "Prime";
}

int countPrime(int n)

{

    int count = 0;
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;

            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    return count;
}

void printDigits(int n)
{

    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        count++;
        // cout << rem << " ";
        n /= 10;
    }

    cout << count;
}

bool isArmstrong(int n)
{

    int ans = 0;
    int real = n;

    while (n > 0)
    {
        int digit = n % 10;
        int cube = digit * digit * digit;
        ans += cube;
        n /= 10;
    }

    if (ans != real)
        return false;

    return true;
}

int GCD(int a, int b)
{
    int gcd = 1;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << isPrime(n) << endl;

    cout << "Prime numbers counts : " << countPrime(n) << endl;

    // printDigits(n);

    cout << isArmstrong(153) << endl;

    cout << GCD(20, 28) << endl;

    return 0;
}