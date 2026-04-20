/*
 DSA = Data Structures and Algorithms
 why DSA is important
*/

// code.cpp -> compiler -> machine code -> executable file (.exe)

#include <iostream>  // for input and output
using namespace std; // to avoid writing std:: before every standard library object

int main()
{

    cout << "Prince\n"
         << "babu";

    int age = 25;
    char grade = 'A';
    float PI = 3.14;
    bool isSafe = true; // true = 1, false = 0
    double price = 100.99;

    int value = grade; // ASCII value of 'A' is 65
    cout << "\nASCII value of grade: " << value;

    int newPrice = (int)price; // type casting, newPrice will be 99
    cout << "\nNew price: " << newPrice;

    int input;
    cout << "\nEnter a number: ";
    cin >> input; // taking input from user
    cout << "\nYou entered: " << input;

    // operators
    int a = 10, b = 5;
    cout << "\nAddition: " << a + b;       // 15
    cout << "\nSubtraction: " << a - b;    // 5
    cout << "\nMultiplication: " << a * b; // 50
    cout << "\nDivision: " << a / b;       // 2

    cout << "\nComparison (a > b): " << (a > b);                        // 1 (true)
    cout << "\nComparison (a < b): " << (a < b);                        // 0 (false)
    cout << "\nComparison (a == b): " << (a == b);                      // 0 (false)
    cout << "\nComparison (a != b): " << (a != b);                      // 1 (true)
    cout << "\nLogical AND (a > 0 && b > 0): " << ((a > 0) && (b > 0)); // 1 (true)
    cout << "\nLogical OR (a > 0 || b < 0): " << ((a > 0) || (b < 0));  // 1 (true)
    cout << "\nLogical NOT (!(a > 0)): " << (!(a > 0));                 // 0 (false)

    // sum of two numbers
    int num1, num2;
    cout << "\nEnter frist number : ";
    cin >> num1;

    cout << "\nEnter second number : ";
    cin >> num2;

    int sum = num1 + num2;
    cout << "\nSum of " << num1 << " and " << num2 << " is: " << sum;

    // Unary operator
    int x = 5;
    int y = x++;

    cout << "\nValue of y: " << y; // 5
    cout << "\nValue of x: " << x; // 6

    return 0;
}
