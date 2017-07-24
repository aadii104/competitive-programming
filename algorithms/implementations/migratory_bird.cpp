// https://www.hackerrank.com/challenges/migratory-birds/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec(5,0);

    int temp;
    while(n-- >0){
        std::cin >> temp;
        ++vec[temp-1];
    }

    temp = 0;
    for(int i=1;i<5;i++){
        if( vec[i]> vec[temp])
            temp =i;
    }
    std::cout<< temp + 1 <<'\n';
    return 0;
}