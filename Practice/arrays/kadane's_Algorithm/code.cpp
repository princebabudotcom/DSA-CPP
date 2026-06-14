#include <iostream>
using namespace std;

int kadanesAlgorith(int arr[], int size)
{
    int maxNum = INT8_MIN;
    int currentSUm = 0;

    for (int i = 0; i < size; i++)
    {
        currentSUm += arr[i];
        maxNum = max(currentSUm, maxNum);

        if (currentSUm < 0)
        {
            currentSUm = 0;
        }
    }

    return maxNum;
}

int main()
{

    // print numbers Maximum syn array

    int size;
    cout << "Enter a number : ";
    cin >> size;

    int arr[size];

    // dynamic array

    cout << "Enter Arrays values : " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // print pair's

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    // brute force

    int MAX_SUM = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        int currentSum = 0;

        for (int j = i; j < size; j++)
        {
            currentSum += arr[j];
            MAX_SUM = max(currentSum, MAX_SUM);
        }
    }

    cout << "MAX Sum = " << MAX_SUM << endl;

    // using kadane's algorithm
    cout << "MAX Sum using Kadane's Algorithm : " << kadanesAlgorith(arr, size);

    return 0;
}