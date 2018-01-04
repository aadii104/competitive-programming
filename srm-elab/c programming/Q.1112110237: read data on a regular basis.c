#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int i, j, t, n;
    scanf("%d", &t);
    while (t--)
    {
        int min = 9999999, lcm;
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > min || arr[j] > min)
                    continue;
                lcm = (arr[i] * arr[j]) / gcd(arr[i], arr[j]);
                if (lcm < min)
                    min = lcm;
            }
        }
        printf("%d\n", min);
    }
    return 0;
}