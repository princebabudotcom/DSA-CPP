#include <iostream>
using namespace std;

int main()
{

    int num = 1;
    char ch = 'A';
    for (int i = 0; i < 7; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}