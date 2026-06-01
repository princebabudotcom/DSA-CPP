
// for loop using pattern

#include <iostream>
using namespace std;

/*
 * Square pattern
 */

int main()
{

    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    /*
     * 1 2 3 4    * * * *     A B C D
     * 1 2 3 4    * * * *     A B C D
     * 1 2 3 4    * * * *     A B C D
     * 1 2 3 4    * * * *     A B C D
     */

    for (int i = 0; i <= n - 1; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= n - 1; j++)
        {
            // cout << j;    * print number
            // cout << "*";   * print star
            cout << ch;
            ch += 1; // update as 66 = "B" then print B after update
        }
        cout << endl;
    }

    return 0;
}

int main()
{

    int num = 1, n;
    cout << "Enter a number : ";
    cin >> n;

    /*
     * 1 2 3 4
     * 5 6 7 8
     * 9 10 11 12
     */

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "After Pattern :" << num;

    return 0;
}

/**
 * Traingle pattern
 */

int main()
{

    int n;
    cout << "Enter a number";
    cin >> n;

    /*
     *    *                  1                1
     *    * *                2 2              2 1
     *    * * *              3 3 3            3 2 1
     *    * * * *            4 4 4 4          4 3 2 1
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // cout << "* ";         // print traingle in stars
            // cout << i + 1 << " "; // for print numbers 1 22 333
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    // reverse traingle
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}