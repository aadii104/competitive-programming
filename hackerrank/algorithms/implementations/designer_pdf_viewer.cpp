#include <bits/stdc++.h>
using namespace std;

int main(){
    int h =-1, len, height[26];
    string str;
    for(int i; i<26 ; i++){
        cin >> height[i];
    }
    cin >> str;
    len = str.length();
    for(int i=0; i< len; i++){
        if(height[str[i]- 'a'] > h){
            h = height[str[i ]- 'a']
        }
    }
    cout << len*h <<endl;

return 0;
}