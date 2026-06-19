#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 20;
}

int main()
{

    // store address of varaibles

    int a = 10;
    int *ptr = &a;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    // pointer to pointer address
    int **parPtr = &ptr;
    cout << parPtr << endl;

    // check stored value of a address
    cout << *(&a) << endl;  // 10
    cout << *(ptr) << endl; // 10

    // NULL Pointer
    int **Nptr = NULL;
    // cout << *Nptr << endl;

    // predict question

    // Change a Vaule in Mian fnc
    changeA(&a);

    cout << a << endl;

    // Array pointer
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;

    int prtt = *arr;
    cout << prtt + 2 << endl;

    return 0;
}