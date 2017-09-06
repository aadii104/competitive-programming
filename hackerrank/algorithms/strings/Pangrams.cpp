#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> table(26,0);
    int check =0;
    string s;
    getline(cin, s);
    for(char ch:s){
        if(ch != ' '){
            if(isupper(ch))
                ch =tolower(ch);
            if(table[ch%97] == 0){
                table[ch%97]++;
                check++;
            }
        }
    }
    if(check == 26){
        cout << "pangram";
    }else{
        cout << "not pangram";
    }

    return 0;
}
