#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidPalimdrom(string s)
{
    int st = 0, end = s.size() - 1;

    while (st <= end)
    {
        if (!isalnum(s[st]))
        {
            st++;
            continue;
        }

        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st] != tolower(s[end])))
        {
            return false;
        }
        st++;
        end--;
    }

    return true;
}

string removeOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}
int main()
{

    string s = "madam";

    cout << isValidPalimdrom(s) << endl;

    s = "daabcbaabcbc";

    cout << removeOccurrences(s, "abc") << endl;

    return 0;
}