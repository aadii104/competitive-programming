// https://www.hackerrank.com/challenges/day-of-the-programmer


#include  <vector>
#include <iostream>
#include <algorithm>

int main(){
    int yr;
    std::cin >> yr;
    if(yr == 1918){
        std::cout << "26.09.1918\n";
    }else{
        if((yr < 1918 && yr % 4 == 0) || (yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0){
            std::cout << "12.09." << yr << '\n';
        }else{
            std::cout << "13.09." << yr << '\n';
        }
    }

    return 0;
}