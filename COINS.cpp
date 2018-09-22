#include<stdio.h>
long long int coins(long long);
long long int maxima(long long,long long);
long long int n,dp[10000000];
int main()
{       long long int i;
    while((scanf("%lld",&n))!=EOF)
    {
          for(i=0;i<10000000;i++)
            dp[i]=0;
 
    long long int k=coins(n);
    printf("%lld\n",k);}
    return 0;
}
 long long int coins(long long int n)
{
       if(n<10000000)
       {
             if(dp[n]!=0)
                   return dp[n];
 
 
            else
              {
 
 
               if(n<=11)
               return n ;
               else
               return dp[n]=maxima(coins(n/2)+coins(n/3)+coins(n/4),n);
              }
 
       }
 
 
       else
        return maxima(coins(n/2)+coins(n/3)+coins(n/4),n);
 
}
long long  int maxima(long long int a,long long int b)
{
 
    if(a>b)
        return a;
    else
        return b;
}
