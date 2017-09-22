#include <iostream>

using namespace std;

long long nCr(int n, int k);

int main()
{
    int tc;
    cin >> tc;
    while (tc-->0)
    {
        int n, k;
        cin >> n >> k;
        cout << nCr(n - 1, k - 1) << endl;
    }
    return 0;
}

long long nCr(int n, int k)
{
    if (k == 0 || n == k)
    {
        return 1;
    }
    if (k > n)
    {
        return 0;
    }
    if ((n - k) < k)
    {
        k = n - k;
    }

    long long value = 1;
    int multiplier = n - k + 1;
    int divisor = 1;

    for (; divisor <= k && multiplier <= n;)
    {
        value *= multiplier;
        multiplier++;
        if (value % divisor == 0)
        {
            value /= divisor;
            divisor++;
        }
    }
    while (multiplier <= n)
    {
        value *= multiplier;
        multiplier++;
    }
    while (divisor <= k)
    {
        value /= divisor;
        divisor++;
    }
    return value;
}
