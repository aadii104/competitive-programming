#include <stdio.h>
#include <string.h>

int main()
{

    char str[15];
    int i = 0, l = 0, f = 1;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        l = l + 1;
    }
    printf("%d", l);
    for (i = 0; i <= l - 1; i++)
    {
        if (str[i] == ' ')
        {
            f = f + 1;
        }
    }

    return 0;
}   