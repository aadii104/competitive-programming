#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n;
    std::vector<int> board(n);
    for(auto& e: board)
        std::cin>>e;
    std::vector<int> rank(n);
    rank[0] = 1;
    for(size_t i=1 ; i<n; i++){
        if(board[i] == board[i-1]){
            rank[i] = rank[i-1];
            continue;
        }
        rank[i] = rank[n-1] + 1;
        std::cin >>m ; 
        std::vector<int> alice(m);

        int curr = rank[n], ci = n-1;
        for(auto& e:alice){
            std::cin >> e;
            while(ci >= 0 && e> board[ci]){
                --ci;
            }
            if(board[ci] == e)
                std::cout << rank[ci];
            else if (board[ci] > e)
                std:: cout << rank[ci] +1;
            else    
                std::cout << 1;
            std::cout << '\n';
        }
    }
    return 0;
}
