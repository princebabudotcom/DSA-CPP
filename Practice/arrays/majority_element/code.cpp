#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
        cout << endl;
    }

    return 0;
}