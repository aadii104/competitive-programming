#include <stdio.h>
int main()
{

    int me, you;

    float average;

    scanf("%d", &me);
    scanf("%d", &you);

    printf("I am %d", me);

    printf("\n");

    printf("You are %d", you);

    printf("\n");

    average = ((float)me + (float)you) / 2;
    printf("We are around %.2f", average);

    printf("\n");

    return 0;
}