#include <stdio.h>

int main()
{
    int sm[101][101], col[101][101];
    int i, j, k, m;
    int min;

    while (scanf("%d", &m) == 1)
    {
        for (i = 0; i < m; i++)
        {
            scanf("%d", &col[1][i]);
            sm[1][i] = 0;
        }

        for (i = 0; i < (m - 1); i++)
        {
            col[2][i] = (col[1][i] + col[1][i + 1]) % 100;
            sm[2][i] = col[1][i] * col[1][i + 1];
        }

        for (i = 3; i <= m; i++)
        {
            for (j = 0; j <= (m - i); j++)
            {
                sm[i][j] = 99999999;
                for (k = 1; k < i; k++)
                {
                    min = (col[k][j] * col[i - k][j + k]) + sm[k][j] + sm[i - k][j + k];
                    if (min < sm[i][j])
                    {
                        sm[i][j] = min;
                        col[i][j] = (col[k][j] + col[i - k][j + k]) % 100;
                    }
                }
            }
        }

        printf("%d\n", sm[m][0]);
    }

    return 0;
}