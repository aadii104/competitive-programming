#include <stdio.h>
int main()
{
    int N, i;
    long int sum;
    scanf("%d", &N);
    sum = 0;
    for (i = 1; i <= N; i++)
        sum = (sum + (i * i * i * i));
    printf("%ld", sum);
    return 0;
}