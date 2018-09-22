#include<stdio.h>
main()
{
 
 
    long long int t,n,cnt,i;
    scanf("%lld",&t);
    while(t--)
    {
 
        scanf("%lld",&n);
        cnt=0;
        for(i=5;(n/i)>=1;i*=5)
            cnt+=(n/i);
 
        printf("%lld\n",cnt);
 
    }
 
}
