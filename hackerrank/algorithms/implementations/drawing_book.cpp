#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,n;
    cin >> n >>p;
    if (n-p> p )
     cout << p/2;
    else
     cout <<( n-p)/2;
}