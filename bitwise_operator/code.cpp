#include <iostream>
using namespace std;

int main()
{

    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    int and_result = a & b; // Bitwise AND
    int or_result = a | b;  // Bitwise OR
    int xor_result = a ^ b; // Bitwise XOR

    /*
     *  Bitwise AND (a & b) :
     * - 0 1 0 1
     * - 0 0 1 1
     * - 0 0 0 1
     *
     * *  Bitwise OR (a | b) :
     * - 0 1 0 1
     * - 0 0 1 1
     * - 0 1 1 1 - > 7 in decimal
     *
     * *  Bitwise XOR (a ^ b) :
     * - 0 1 0 1
     * - 0 0 1 1
     * - 0 1 1 0 - > 6 in decimal
     *
     *
     * Bitwise << (left shift)
     *
     */

    cout << "Bitwise AND (a & b) : " << and_result << endl;
    cout << "Bitwise OR (a | b) : " << or_result << endl;
    cout << "Bitwise XOR (a ^ b) : " << xor_result << endl;

    /*
     * Bitwise Left shift (a << 1) :
     * - 0 1 0 1
     * - 0 1 0 1 0 - > 10 in decimal
     *   1 0 1 0
     */

    cout << "Bitwise Left shift (a << 1) : " << (9 << 2) << endl; // Left shift a by 1 (0101 becomes 1010, which is 10 in decimal)

    /*
     * 0 1 0 1 - > 5 in decimal
     * Right shift by 1:
     * 0 0 1 0 - > 2 in decimal
     */

    cout << "Bitwise Right shift (a >> 1) : " << (9 >> 2) << endl; // Right shift a by 1 (0101 becomes 0010, which is 2 in decimal)

    // data data modifiers

    /*
     * int - 4 bytes (32 bits)
     * short - 2 bytes (16 bits)
     * int long - 8 bytes (64 bits)
     * int long long - 8 bytes (64 bits)
     * unsigned int - 4 bytes (32 bits)
     * unsigned short - 2 bytes (16 bits)
     * unsigned long - 8 bytes (64 bits)
     * unsigned long long - 8 bytes (64 bits)
     *
     */

    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of long: " << sizeof(int long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << endl;
    cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes";

    return 0;
}