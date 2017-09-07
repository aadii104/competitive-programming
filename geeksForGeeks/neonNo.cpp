
// Neon Number

//     A neon number is a number where the sum of digits of square of the number is equal
//  to the number.The task is to check and print neon numbers in a range.

#include <iostream>
    using namespace std;
#include <math.h>

int checkNeon(int x){
    int sq = x*x;
    int sum =0;
    while (sq !=0 ){
        sum = sum + sq % 10;
        sq = sq/10;
    }
    return (sum == x);
}


int main(){
    for (int i=0; i<1000;i++)
        if(checkNeon(i))
            cout << i<< " ";
}