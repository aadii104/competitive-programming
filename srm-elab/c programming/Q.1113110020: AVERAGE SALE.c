#include <stdio.h>
int main()
{
    float s[5], a;

    scanf("%f", &s[0]);
    scanf("%f", &s[1]);
    scanf("%f", &s[2]);
    scanf("%f", &s[3]);
    scanf("%f", &s[4]);
    scanf("%f", &a);
    printf("The required sale in the sixth month is %.2f", (6 * a) - (s[0] + s[1] + s[2] + s[3] + s[4]));
    return 0;
}