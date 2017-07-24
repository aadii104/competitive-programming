// https://www.hackerrank.com/challenges/divisible-sum-pairs

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    int c=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int j = 0;j < n;j++){
       cin >> a[j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
                if((a[i]+a[j])%k==0)
                    c++;
        }
    }
    cout<<c;
    return 0;
}
