#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,cost = 0,charged,price;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> price;
        if(i!=k)cost+=price;
    }
    cin >> charged;
    ((charged -= (cost/2)) != 0) ? cout << charged << endl : cout << "Bon Appetit" << endl;
    return 0;
}