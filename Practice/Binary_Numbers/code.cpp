#include <iostream>
using namespace std;

int DecimalToBinary(int num)
{

    int ans = 0, pow = 1;

    while (num > 0)
    {
        int rem = num % 2;
        num = num / 2;
        ans += rem * pow;
        pow *= 10;
    }

    return ans;
}

int BinaryToDecimal(int num)
{

    int ans = 0, pow = 1;

    while (num > 0)
    {
        int rem = num % 10;
        ans += rem * pow;
        num /= 10;
        pow *= 2;
    }

    return ans;
}

int ExOr(int num)
{
    return num ^ 10;
}

int main()
{

    int num;
    cout << "Enter a Number : ";
    cin >> num;

    // Decimal to bInary
    cout << "Decimal to Binary : " << DecimalToBinary(num) << endl;

    // Binar to Decimal

    int num2;

    cout << "Enter a Binary number : " << endl;
    cin >> num2;
    cout << "Binary to Decimal : " << BinaryToDecimal(num2) << endl;

    // Exor

    cout << ExOr(num) << endl;

    return 0;
}