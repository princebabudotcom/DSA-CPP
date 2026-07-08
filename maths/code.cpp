#include <iostream>
#include <vector>
using namespace std;

string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return "Non Prime";
    }

    return "Prime";
}

int countPrime(int n)

{

    int count = 0;
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;

            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    return count;
}

void printDigits(int n)
{

    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        count++;
        // cout << rem << " ";
        n /= 10;
    }

    cout << count;
}

bool isArmstrong(int n)
{

    int ans = 0;
    int real = n;

    while (n > 0)
    {
        int digit = n % 10;
        int cube = digit * digit * digit;
        ans += cube;
        n /= 10;
    }

    if (ans != real)
        return false;

    return true;
}

int GCD(int a, int b)
{
    int gcd = 1;

    // brute force
    // for (int i = 1; i <= min(a, b); i++)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int lcm(int a, int b)
{
    int gcd = GCD(a, b);
    return (a * b) / gcd;
}

int reverseNumber(int num)
{

    int revNum = 0;

    while (num > 0)
    {
        int dig = num % 10;

        if (revNum > INT32_MAX / 10 || revNum < INT32_MIN)
        {
            return 0;
        }
        revNum = (revNum * 10) + dig;
        num /= 10;
    }

    return revNum;
}

vector<int> twoSum(vector<int> &nums, int target)
{

    int n = nums.size();
    vector<int> ans;

    int st = 0, end = n - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;
        int currSum = nums[st] + nums[end];

        if (currSum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }

        currSum < target ? st++ : end--;
    }

    return ans;
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << isPrime(n) << endl;

    cout << "Prime numbers counts : " << countPrime(n) << endl;

    // printDigits(n);

    cout << isArmstrong(153) << endl;

    cout << "GCD of a number = " << GCD(20, 28) << endl;
    cout << "LCM of a number = " << lcm(20, 28) << endl;
    cout << "Reverse a number = " << reverseNumber(123) << endl;

    vector<int> twoSums = {3, 3};
    vector<int> res = twoSum(twoSums, 6);

    for (int val : res)
    {
        cout << val << " ";
    }

    return 0;
}