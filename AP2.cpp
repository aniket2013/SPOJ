#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,x,y,z;
    scanf("%lld",&t);
    while(t--)
    {
 
        scanf("%lld",&x);
        scanf("%lld",&y);
        scanf("%lld",&z);
        long long int n=2*z/(x+y);
        long long int d=(y-x)/(n-5);
        long long int a=x-2*d;
        long long int l=a+(n-1)*d;
        printf("%lld\n",n);
        long long int i=a;long long int j=1;
       while(j<=n)
       {
           printf("%lld ",i);
           i+=d;j++;
       }
       printf("\n");
 
 
 
    }
    return 0;
}
