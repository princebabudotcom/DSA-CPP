# 📘 C++ Strings (Basics)

This README covers the basics of **Character Arrays (C-Strings)** and **`std::string`** in C++.

---

# Table of Contents

1. Character Arrays
2. String Class
3. Input Methods
4. Accessing Characters
5. Traversing Strings
6. Basic String Functions
7. Character Functions
8. ASCII Values
9. Difference Between Character Array and String

---

# 1. Character Arrays (C-Strings)

A character array stores a sequence of characters ending with a **null character (`'\0'`)**.

```cpp
char str[] = "Hello";
```

Memory:

```
H e l l o \0
```

---

## Declaring a Character Array

```cpp
char name[20];
```

---

## Initializing

```cpp
char name[] = "OpenAI";
```

or

```cpp
char name[20] = "OpenAI";
```

---

## Input

```cpp
char name[20];

cin >> name;
```

Stops at space.

Input

```
Hello World
```

Output

```
Hello
```

---

## Input with Spaces

```cpp
cin.getline(name, 20);
```

Input

```
Hello World
```

Output

```
Hello World
```

---

## Printing

```cpp
cout << name;
```

---

## Accessing Characters

```cpp
cout << name[0];
```

Output

```
H
```

---

## Traversing

```cpp
for(int i = 0; name[i] != '\0'; i++)
{
    cout << name[i];
}
```

---

# 2. String Class (`std::string`)

Include

```cpp
#include <string>
```

Declaration

```cpp
string s;
```

Initialization

```cpp
string s = "Hello";
```

---

# 3. Input Methods

## Using `cin`

```cpp
string s;

cin >> s;
```

Stops at space.

---

## Using `getline()`

```cpp
getline(cin, s);
```

Reads the complete line.

---

# 4. Accessing Characters

```cpp
string s = "Apple";

cout << s[0];
```

Output

```
A
```

Using `at()`

```cpp
cout << s.at(2);
```

First character

```cpp
s.front()
```

Last character

```cpp
s.back()
```

---

# 5. Traversing a String

## Using Loop

```cpp
for(int i = 0; i < s.size(); i++)
{
    cout << s[i];
}
```

---

## Range-Based Loop

```cpp
for(char ch : s)
{
    cout << ch;
}
```

---

# 6. Basic String Functions

## Length

```cpp
s.length();
```

or

```cpp
s.size();
```

---

## Check Empty

```cpp
s.empty();
```

---

## Clear String

```cpp
s.clear();
```

---

## Concatenation

```cpp
string a = "Hello";
string b = "World";

string c = a + " " + b;
```

Output

```
Hello World
```

---

## Append

```cpp
a += b;
```

or

```cpp
a.append(b);
```

---

## Push Back

```cpp
s.push_back('A');
```

---

## Pop Back

```cpp
s.pop_back();
```

---

## Substring

```cpp
string s = "Programming";

cout << s.substr(3, 4);
```

Output

```
gram
```

---

## Find

```cpp
s.find("abc");
```

Returns the index if found, otherwise

```cpp
string::npos
```

Example

```cpp
if(s.find("abc") != string::npos)
{
    cout << "Found";
}
```

---

# 7. Character Functions

Include

```cpp
#include <cctype>
```

Check alphabet

```cpp
isalpha(ch);
```

Check digit

```cpp
isdigit(ch);
```

Uppercase

```cpp
toupper(ch);
```

Lowercase

```cpp
tolower(ch);
```

Check uppercase

```cpp
isupper(ch);
```

Check lowercase

```cpp
islower(ch);
```

---

# 8. ASCII Values

Some common ASCII values

| Character | ASCII |
| --------- | ----: |
| A         |    65 |
| Z         |    90 |
| a         |    97 |
| z         |   122 |
| 0         |    48 |
| 9         |    57 |

Convert uppercase to lowercase

```cpp
char ch = 'A';

ch = ch + 32;
```

Convert lowercase to uppercase

```cpp
char ch = 'a';

ch = ch - 32;
```

Better method

```cpp
tolower(ch);
toupper(ch);
```

---

# 9. Character Array vs String

| Character Array                | String                         |
| ------------------------------ | ------------------------------ |
| Fixed size                     | Dynamic size                   |
| Ends with `'\0'`               | Managed automatically          |
| Uses `<cstring>` functions     | Uses built-in member functions |
| Less convenient                | Easier to use                  |
| Faster in some low-level cases | Preferred in modern C++        |

---

# Common `<cstring>` Functions (Character Arrays)

Include

```cpp
#include <cstring>
```

Length

```cpp
strlen(str);
```

Copy

```cpp
strcpy(dest, src);
```

Concatenate

```cpp
strcat(str1, str2);
```

Compare

```cpp
strcmp(str1, str2);
```

---

# Summary

- **Character arrays** are C-style strings that end with a null character (`'\0'`).
- **`std::string`** is the recommended way to work with strings in modern C++.
- Use `getline()` to read strings containing spaces.
- Learn basic operations like length, concatenation, substring, find, and character access.
- Use functions from `<cctype>` for character checking and case conversion.
