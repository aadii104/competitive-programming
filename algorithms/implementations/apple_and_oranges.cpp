#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

int s,t,a,b,m,n;
int dis1, dis2, temp;
static bool comp(int s, int t, int x) {
    return x >= s && x <= t;
}

int main(){
    std::cin >> s >>t >> a >> b >> m >>n;
    dis1 =dis2 =0 ;
    while(m-->0){
        std::cin>> temp;
        dis1 += comp(s,t,temp+a);
    }
     while(n-->0){
        std::cin>> temp;
        dis2 += comp(s,t,temp+b);
    }
    std::cout << dis1 << endl << dis2 <<endl;

    return 0;
}