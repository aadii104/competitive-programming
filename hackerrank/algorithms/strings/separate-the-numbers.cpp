#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(string str, long long int &newElement)
{
    if (str[0] == '0')
    {
        return false;
    }
    if (str.size() <= 1)
    {
        return false;
    }
    for (int i = 1; i <= str.size() / 2; i++)
    {
        string a = str.substr(0, i);
        newElement = stoll(a);
        int sub = 1;
        while (a.size() < str.size())
        {
            a += to_string(newElement + (sub));
            sub++;
        }
        if (a.compare(str) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    long long int newElement = 0;
    while (n-- > 0)
    {
        string str;
        cin >> str;
        if (check(str, newElement))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}