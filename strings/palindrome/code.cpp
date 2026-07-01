#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * -------------------
 * | valid palindrome |
 * --------------------
 */

bool isAlpahaNumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }

    false;
}

bool isPalindrome(string s)
{

    int n = s.size();

    int st = 0, end = n - 1;
    while (st < end)
    {
        if (!isAlpahaNumeric(s[st]))
        {
            st++;
            continue;
        }

        if (!isAlpahaNumeric(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
            return false;

        st++;
        end--;
    }

    return true;
}

string removeOccurrences(string s, string part)
{
    while (s.find(part) <= s.length() && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{

    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    cout << isPalindrome(s) << endl;

    return 0;
}