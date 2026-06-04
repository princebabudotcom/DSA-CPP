#include <iostream>
using namespace std;

// binary numbers system

int decimalToBinary(int DecNum)
{
    int ans = 0, p = 1;

    while (DecNum > 0)
    {
        int rem = DecNum % 2;
        DecNum /= 2;
        ans += rem * p;
        p *= 10;
    }
    return ans;
}

int binaryToDecimal(int BinNum)
{
    int ans = 0, p = 1; // 2^0 = 1

    while (BinNum > 0)
    {
        int rem = BinNum % 10; // 1, 0
        BinNum /= 10;          // 101, 10
        ans += rem * p;        // 1*1 + 0*2 + 1*4
        p = p * 2;             // 1, 2, 4
    }
    return ans;
}

int main()
{

    // int DecNum;
    // cout << "Enter a decimal number: ";
    // cin >> DecNum;

    cout << binaryToDecimal(101010) << endl;

    return 0;
}