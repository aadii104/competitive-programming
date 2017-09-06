#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool letter[26] = {false};
    string word;

    while (cin >> word)
    {
        for (int i = 0; i < word.length(); i++)
        {
            int value = tolower(word[i]) - 'a';
            letter[value] = true;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (!letter[i])
        {
            cout << "not pangram" << endl;
            return 0;
        }
    }

    cout << "pangram" << endl;

    return 0;
}