#include <stdio.h>
int main()
{
  
     int a, num, sum = 0 ;
    scanf("%d", &num) ;
    
    for(a = 1 ; a < num ; a++)
    {
        if(num % a == 0)
        sum = sum + a ;
    }

    if (sum == num)
    printf("Perfect number") ;
    else
    printf("Not a perfect number") ;

	return 0;
}