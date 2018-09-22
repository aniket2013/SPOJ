#include<stdio.h>
#include<math.h>
main()
{
 
//int k=round((float)(sqrt(8*x+1))/(float)(2));
long long int t,x,n,i,j;
scanf("%lld",&t);
while(t--)
{
    scanf("%lld",&x);
     float k=((float)(sqrt(8*x+1))/(float)(2));
     float diff=k-(int)k;
     if(diff>0.5)
         n=round(k);
     else
         n=k;
 
    long long int extreme=(n+n*n)/2;
 
    if(n%2!=0)
    {
        long long int lower_extreme=extreme-n+1;
 
        long long int diff=x-lower_extreme;
        i=n-diff;j=1+diff;
        printf("TERM %lld IS %lld/%lld\n",x,i,j);
    }
    else
    {
        long long int lower_extreme=extreme;
        long long int diff=lower_extreme-x;
        i=n-diff;j=1+diff;
 
        printf("TERM %lld IS %lld/%lld\n",x,i,j);}
 
    }
 
}
