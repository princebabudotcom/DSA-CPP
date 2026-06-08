#include <iostream>
using namespace std;

/*
 * Que 1 - WAF to claculate sum and products of all numbers in an array .
 * Que 2 - WAF to swap the max and min number of an array .
 * Que 3 - WAF to print all unique values in an array .
 * Que 4 - WAF to print intersection of 2 arrays .
 */

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Que 1

void SumOFArray(int arr[], int size)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of Elements : " << sum << endl
         << "Product of elements : " << product << endl;
}

// Que 2 : Max and Min number swap

void SwapMinMaxNum(int arr[], int size)
{
    int max = INT8_MIN, min = INT8_MAX;
    int maxIdx, minIdx;

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIdx = i;
        }

        if (min > arr[i])
        {
            min = arr[i];
            minIdx = i;
        }
    }

    swap(arr[minIdx], arr[maxIdx]);
}

int uniqueElem(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    return ans;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 5, 4, 5, 3, 4};

    int size = sizeof(arr) / sizeof(int);

    // sum and products
    SumOFArray(arr, size);

    // swap elements
    SwapMinMaxNum(arr, size);
    printArray(arr, size);

    // find unique elements

    size = sizeof(arr2) / sizeof(int);
    cout << "Array Unique Element : " << uniqueElem(arr2, size) << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}