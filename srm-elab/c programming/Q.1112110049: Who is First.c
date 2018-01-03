#include <stdio.h>
int main()
{
    int n, t1, t2, x, temp, s1 = 0, s2 = 0;
    scanf("%d", t1);
    scanf("%d", t2);
    temp = t1;

    while (t1 > 0)
    {
        x = t1 % 10;
        s1 = s1 + x;
        t1 /= 10;
    }
    while (t2 > 0)
    {
        x = t2 % 10;
        s2 += x;
        temp = t2;
    }
    (t1 > t2 ? printf("%d", s1) : printf("%d", s2));
    return 0;
}