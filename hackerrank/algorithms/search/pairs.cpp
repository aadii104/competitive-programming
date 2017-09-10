#include <bits/stdc++.h>
using namespace std;
int main()
{
    int64_t N, K;
    cin >> N >> K;
    set<int64_t> A;
    for (int64_t i = 0; i < N; i++)
    {
        int64_t temp;
        cin >> temp;
        A.insert(temp);
    }
    int64_t ans = 0;
    for (int64_t i : A)
        ans += A.count(i + K);
    cout << ans;
    return 0;
}