#include <stdio.h>
int main()
{
    int num[15];
    int i, esum, osum, N;
    esum = 0;
    osum = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < N; i++)
    {
        if ((num[i] % 2) == 0)
        {
            esum = esum + num[i];
        }
        else
        {
            osum = osum + num[i];
        }
    }
    printf("even=%d", esum);
    printf("\n");
    printf("odd=%d\n", osum);
    return 0;
}