// All submissions for this problem are available.
// In Byteland they have a very strange monetary system.

// Each Bytelandian gold coin has an integer number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. But these numbers are all rounded down (the banks have to make a profit).

// You can also sell Bytelandian coins for American dollars. The exchange rate is 1:1. But you can not buy Bytelandian coins.

// You have one gold coin. What is the maximum amount of American dollars you can get for it?

// Input
// The input will contain several test cases (not more than 10). Each testcase is a single line with a number n, 0 <= n <= 1 000 000 000. It is the number written on your coin.

// Output
// For each test case output a single line, containing the maximum amount of American dollars you can make.

// My approach but found a better dp approach
// #include <iostream>
// using namespace std;

// int main()
// {
//     int tc;
//     while (tc--)
//     {

//         long long coin;
//         cin >> coin;
//         int v1 = coin / 2;
//         int v2 = coin / 3;
//         int v3 = coin / 4;
//         if (v1 + v2 + v2 < coin)
//         {
//             cout << coin;
//             break;
//         }
//         else
//         {
//             cout << v1 + v2 + v3;
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <map>

using namespace std;
map<int, long long> cmax;

long long getMax(int n)
{
    if (cmax.find(n) != cmax.end())
        return cmax[n];
    long long result;
    if (n <= 2)
    {
        return n;
    }
    else
        result = getMax(n / 2) + getMax(n / 3) + getMax(n / 4);
    if (result < n)
        result = n;
    cmax[n] = result;
    return result;
}
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("%lld\n", getMax);
    }
    return 0;
}