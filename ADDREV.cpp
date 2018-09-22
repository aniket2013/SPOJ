#include<stdio.h>
main()
{    long long int t;
      scanf("%lld",&t);
      while(t--)
      {
 
 
    long long int n;long long int r=0;long long int m;
    scanf("%lld",&n);
    long long int k=rev(n,r);
    r=0;scanf("%lld",&m);
    long long int l=rev(m,r);
    long long int s=k+l;
    r=0;
    long long int sum=rev(s,r);
    printf("%lld\n",sum);
 
}
}
 int rev(long long int n,long long int r)
{
   if(n==0)
   {
       return r;
   }
   else
   {
       r=(r*10)+(n%10);
       n=n/10;
       rev(n,r);
   }
}
