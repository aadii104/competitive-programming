#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    string str, strRev;

    while (testCases-- > 0)
    {
        int count = 0;
        cin >> strRev;
        str = strRev;
        reverse(strRev.begin(), strRev.end());
        for (int i = 0; i < str.length(); i++)
        {
            if (abs(str[i + 1] - str[i]) == abs(strRev[i + 1] - strRev[i]))
            {
                count++;
            }
        }
        count == str.length() - 1 ? cout << "Funny" << endl : cout << "Not Funny" << endl;
    }

    return 0;
}