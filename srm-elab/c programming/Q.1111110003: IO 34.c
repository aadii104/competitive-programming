#include <stdio.h>
int main()
{
    int basic;
    float hra, da, bonus;
    scanf("%d", &basic);
    hra = (80 * basic) / 100;
    da = (40 * basic) / 100;
    bonus = (25 * hra) / 100;
    printf("Total Salary=%.2f", (basic + hra + da + bonus));
    return 0;
}