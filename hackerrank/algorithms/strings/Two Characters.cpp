#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

int slength(const string &text, char x, char y)
{
    char last_seen = 0;
    int length = 0;
    for (char ch : text)
    {
        if (ch != x && ch != y)
            continue;
        if (last_seen == ch)
            return 0;
        last_seen = ch;
        length += 1;
    }
    return length >= 2 ? length : 0;
}

int main()
{
    int n;
    cin >> n;
    string text;
    cin >> text;
    int max_slength = 0;
    for (char x = 'a'; x <= 'z'; ++x)
    {
        for (char y = x + 1; y <= 'z'; ++y)
        {
            max_slength = max(max_slength, slength(text, x, y));
        }
    }
    cout << max_slength << endl;
    return 0;
}