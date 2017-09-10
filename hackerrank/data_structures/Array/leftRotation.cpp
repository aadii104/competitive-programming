#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    long n, d;
    long arr[100000];
    cin >> n >> d;
    for (long i = 0; i < n; i++)

    {
        cin >> arr[(i + n - d) % n];
    }
    for (j = 0; j < n; j++)
    {
        cout << arr[j];
        cout << " ";
    }
    return 0;
}
