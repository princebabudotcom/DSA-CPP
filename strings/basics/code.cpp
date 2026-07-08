#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    // char -> 1 byte
    // char str[] = {'a', 'b', 'c', '\0'};
    // char str2[] = "Prince";

    // cout << str2[1] << endl;

    // // input
    // char str3[100];
    // cout << "Enter a Char arrray : ";
    // cin.getline(str3, 100);
    // cout << str3 << endl;

    // int len = 0;
    // for (int i = 0; i < str[i] != '\0'; i++)
    // {
    //     len++;
    // }

    // cout << len << endl;

    string str = "hello world";
    cout << str << endl;

    str = "hello jiiii";
    cout << str << endl;

    // reverse a string
    vector<char> s = {'a', 'b', 'e', 'd'};
    int n = s.size();

    int st = 0, end = n - 1;
    while (st < end)
    {
        swap(s[st], s[end]);
        st++;
        end--;
    }

    string str = "olleh dlorw";

    return 0;
}