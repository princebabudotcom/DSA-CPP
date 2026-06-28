#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // O(n^2)
    {

        bool isSwap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        // if (!isSwap)
        // {
        //     return;
        // }
    }
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int smallIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallIdx])
            {
                smallIdx = j;
            }
        }

        swap(arr[i], arr[smallIdx]);
    }
}

int main()
{

    // bubble sort

    int arr[5] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    // selection sort sort
    selectionSort(arr, n);

    // print array
    printArray(arr, n);

    return 0;
}