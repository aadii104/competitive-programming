#include <cmath>
#include <iostream>

int main(){
    size_t n, marks;

    std::cin >> n;
    while(n-- > 0 ){
        std:: cin >> marks;
        if(marks >= 38 && marks % 5 >2)
            marks += 5 -(marks%5);
        std::cout  <<  marks << '\n';
    }
}