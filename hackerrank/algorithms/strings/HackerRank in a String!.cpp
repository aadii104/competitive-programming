#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;
    string str = "hackerrank";
    for (int a = 0; a < q; a++)
    {
        string s;
        cin >> s;
        int n = s.size(), i, j = 0;
        for (i = 0; i < n; i++)
            if (s[i] == str[j]) // compare string s with str
                j++;
        if (j == 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}