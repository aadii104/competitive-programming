#include <stdio.h>
#include <stdlib.h>
#define LL long long int

int main()
{
    int t;
    int cases;
    scanf("%d", &cases);
    for (t = 0; t < cases; t++)
    {
        //code
        int n, k;
        int arr[100];
        scanf("%d %d", &n, &k);
        // Assume a_i can be made to 0 after some p operations (x_i times inside the set and y_i times outside)
        // a_i + (x_i*k) - y_i = 0
        // x_i + y_i = p
        // p = a_i + (k+1)*x_i

        //k += 1;

        int i;
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        if (n == 2)
        {
            printf("YES\n");
            continue;
        }

        int rem1 = arr[0] % (k + 1);
        int rem2 = -1;
        int rem1_count = 1;
        int rem2_count = 0;

        for (i = 1; i < n; i++)
        {
            if (arr[i] % (k + 1) != rem1)
            {
                if (rem2 != -1)
                {
                    if (arr[i] % (k + 1) == rem2)
                        rem2_count++;
                    else
                        break;
                }
                else
                {
                    rem2 = arr[i] % (k + 1);
                    rem2_count = 1;
                }
            }
            else
                rem1_count++;
        }
        //printf("%d %d %d %d\n",rem1,rem2, rem1_count,rem2_count);
        if (i < n)
        {
            printf("NO\n");
            continue;
        }
        if (rem1_count == n - 1 || rem2_count == n - 1 || rem1_count == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}