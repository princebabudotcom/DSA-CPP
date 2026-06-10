#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // sub array start and ends
    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // Maximub sub Array

    //  Brute force Algorithm
    int Max_Sum = INT8_MIN;

    // for (int st = 0; st < n; st++)
    // {
    //     int currentSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         cout << arr[end] << " "; // print starting values of array
    //         currentSum += arr[end];
    //         Max_Sum = max(currentSum, Max_Sum);
    //     }
    //     cout << currentSum << " ";
    //     cout << endl;
    // }

    // cout << "max subArray sum = " << Max_Sum;

    // kadane's Algorithm;

    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        Max_Sum = max(currentSum, Max_Sum); // because of the this gives the - value

        if (currentSum < 0)
            currentSum = 0;
    }

    cout << "max subarray sum = " << Max_Sum;

    return 0;
}