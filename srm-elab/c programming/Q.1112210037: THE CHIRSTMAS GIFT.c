#include <stdio.h>
    #include <stdlib.h>
    #define M 10000000
     
    int main()
    {
      int T, N, s, v[1000],i,j;
      int dp[10001],tot;
      scanf("%d",&T);
      while(T--)
      {
        scanf("%d",&N);
        s = 0;
        for(i=0; i<N; i++)
        {
          scanf("%d",&v[i]);
          s += v[i];
        }
        for(i=0; i<=s; i++)
         dp[i] = 0;
        dp[0] = 1;
     
        for(i=0; i<N; i++) 
         for(j=s; j>=0; j--)
          if(dp[j] > 0 )
           dp[j + v[i]] = ((dp[j+v[i]]) + (dp[j]))%M;
     
        tot = 0;
        for(i=0; i<=s; i++)
         if(dp[i] > 0)
         {
           int inc = ((int)((((int)abs(s- 2*i))) * (dp[i])))%M;
           tot = (tot + inc)%M;
         }
        printf("%d\n",tot);
      }
      
    }    