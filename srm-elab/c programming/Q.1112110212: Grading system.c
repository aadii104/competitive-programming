#include <stdio.h>
int main()
{
    int h, s, t;
    float c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &h);
        scanf("%f", &c);
        scanf("%d", &s);
        if ((h > 50) && (c < 0.7) && (s > 5600))
        {
            printf("10");
            printf("\n");
        }
        else if ((h > 50) && (c < 0.7))
        {
            printf("9");
            printf("\n");
        }
        else if ((c < 0.7) && (s > 5600))
        {
            printf("8");
            printf("\n");
        }
        else if ((h > 50) && (s > 5600))
        {
            printf("7");
            printf("\n");
        }
        else if ((h > 50) || (c < 0.7) || (s > 5600))
        {
            printf("6");
            printf("\n");
        }
        else if ((h < 50) && (c > 0.7) && (s < 5600))
        {
            printf("5");
            printf("\n");
        }
    }
    return 0;
}