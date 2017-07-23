#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1,x2,v1,v2;
     std::cin >> x1 >> v1 >> x2 >> v2;
    while(true){
        if(x2 > x1 && v2 > v1 || x1 > x2 && v1 > v2 || v1 == v2){
             std::cout << "NO" << endl;
            break;
        }
        if((x1 += v1) == (x2 +=v2)){
             std::cout << "YES" << endl;
            break;
        }
    }
    return 0;
}