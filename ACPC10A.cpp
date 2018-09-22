#include<stdio.h>
#include<math.h>
main()
{
long long int a,b,c,k1,k2;
scanf("%lld",&a);
scanf("%lld",&b);
scanf("%lld",&c);
while(a!=0||b!=0||c!=0)
{
      if(2*b==a+c)
      {
      k1=c+(b-a);
      printf("AP %lld\n",k1);
      }
      else
      {
      k2=c*(c/b);
      printf("GP %lld\n",k2);
      }
      scanf("%lld",&a);
      scanf("%lld",&b);
      scanf("%lld",&c);
