#include <stdio.h>
int main()
{
    int t, n, i, t1;
    scanf("%d", &t1);
    while (t1--)
    {
        t = 0;
        scanf("%d", &n);
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                t++;
        }
        if (t == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
}