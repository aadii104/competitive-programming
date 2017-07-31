#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main(){
    std::vector<int> num(100,0);
    int n, temp;
    std::cin >> n;
    while(n-->0){
        std::cin >> temp;
        num[temp-1]++;
    }

    temp = 0;
    for( auto& sock: num){
        temp+=sock/2;
    }
    std::cout << temp <<std::endl;
    return 0;
}