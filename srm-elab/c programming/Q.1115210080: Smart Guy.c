#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n < 10)
        {
            printf("How smart you are!");
            printf("\n");
        }
        else
        {
            printf("-1");
            printf("\n");
        }
    }
    return 0;
}