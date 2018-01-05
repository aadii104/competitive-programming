#include <stdio.h>
#include <string.h>
#define MAX 10000

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int t, i, j, co[26], n;
    char s[MAX + 1], continuous[MAX + 1];
    int max_start[MAX + 1], max_end[MAX + 1], hash[MAX + 1], hi, max_co[MAX + 1], ans;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        n = strlen(s);
        memset(co, 0, 26 * sizeof(int));
        for (ans = hi = j = i = 0; i < n;)
        {
            if (s[i] == '#')
            {
                memset(co, 0, 26 * sizeof(int));
                hash[hi] = j;
                max_co[hi] = ans;
                ans = 0;
                s[j++] = '#';
                continuous[hi] = 0;
                for (i++; i < n && s[i] == '#'; i++)
                    continuous[hi] = 1;
                hi++;
            }
            else
            {
                ans = max(ans, ++co[s[i] - 'a']);
                s[j++] = s[i++];
            }
        }

        if (hi < 3)
        {
            printf("0\n");
            continue;
        }
        n = j;
        memset(max_start, 0, sizeof(int) * n);
        memset(co, 0, sizeof(int) * 26);
        for (ans = i = 0; i < n; i++)
        {
            if (s[i] != '#')
                ans = max(ans, ++co[s[i] - 'a']);
            max_start[i] = ans;
        }

        memset(max_end, 0, sizeof(int) * n);
        memset(co, 0, sizeof(int) * 26);
        for (ans = 0, i = n - 1; i > -1; i--)
        {
            if (s[i] != '#')
                ans = max(ans, ++co[s[i] - 'a']);
            max_end[i] = ans;
        }

        for (ans = i = 0; i < hi - 2; i++)
            if (max_start[hash[i]] && max_end[hash[i + 2]] && !continuous[i + 1])
                ans = max(ans, max_start[hash[i]] + max_co[i + 1] + max_co[i + 2] + max_end[hash[i + 2]]);
        if (ans)
            ans += 3;
        printf("%d\n", ans);
    }
    return 0;
}
