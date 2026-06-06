#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

// liner search
int linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

// reverse an array
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    // int marks[5] = {99, 89, 65, 88, 74};

    int size = 5;
    int marks[5];
    double price[] = {98.99, 105.67, 105.87};

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // int size = sizeof(marks) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {

        // if (smallest > marks[i])
        // {
        //     smallest = marks[i];
        // }

        smallest = min(marks[i], smallest);
        largest = max(marks[i], largest);
    }

    cout << "Smallest value :  " << smallest;
    cout << "Largest value :  " << largest;

    // change Arrray

    changeArr(marks, size);

    cout << "in Main\n"
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;
    // liner search

    int arr[] = {4, 5, 8, 7, 9, 6, 2};
    size = sizeof(arr) / sizeof(int);
    int target = 8;

    int val = linearSearch(arr, size, target);

    cout << "Linear Search at : " << val;
    cout << endl;

    // reverse an Array

    reverseArray(arr, size);

    // print updated Array

    cout << "Reverse An Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}