#include <iostream>
using namespace std;

int main()
{

    int n;
    int num = 0;
    cout << "Enter a number : " << " ";
    cin >> n;

    // Pattern 1 Questions

    char abc = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    // cout << j << " ";   // for numbers
    // cout << "* ";       // for starts
    // cout << abc << " "; // for Alpahabets
    // abc++;
    //     }
    //     cout << endl;
    // }

    // Pattern 2 Questions

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {

    // for numbers
    // cout << (num + 1) << " ";
    // num++;

    // for alphabets
    //         cout << abc << " ";
    //         abc++;
    //     }
    //     cout << endl;
    // }

    // Pattern 3 questions triangle

    for (int i = 0; i < n; i++)
    {

        // for (int j = 0; j < i + 1; j++)
        // {
        // cout << "* ";  // for numbers
        //     cout << i + 1 << " "; // for numbers
        // }

        // for reverse numbers

        // for (int j = i + 1; j > 0; j--)
        // {
        //     cout << j << " ";
        // }

        // cout << endl;
    }

    // Pattern 4 questions floyd's triangle pattern

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    // for numbers
    // cout << num + 1 << " ";
    // num++;

    // for characters
    //         cout << abc << " ";
    //         abc++;
    //     }
    //     cout << endl;
    // }

    // Pattern 5 questions inverted traingle

    // for (int i = 0; i < n; i++)
    // {
    // print spaces

    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    // print numbers

    //     for (int j = 0; j < n - i; j++)
    //     {
    // cout << i; // for numbers
    //         cout << abc << "";
    //     }

    //     abc++;
    //     cout << endl;
    // }

    // Pattern 6 Pyramid pattern

    for (int i = 0; i < n; i++)
    {

        // for spaces

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // for starting numbers
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        // write all reverse numbers

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}