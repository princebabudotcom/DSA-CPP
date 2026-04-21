#include <iostream>
using namespace std;

int main()
{

    // condtion statments

    int num;

    cout << "Enter a number: ";
    cin >> num;

    // negative and positive number
    if (num > 0)
    {
        cout << "The number is positive." << endl;
    }
    else
    {
        cout << "The number is Negative." << endl;
    }

    // even and odd number

    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    // if-else if-else statement

    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase letter" << endl;
    }
    else
    {
        cout << "uppercase letter" << endl;
    }

    // ternary operator

    int n = 10;

    cout << (n >= 0 ? "Positive" : "Negative") << endl;

    return 0;
}