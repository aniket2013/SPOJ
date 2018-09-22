#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,r=0;
    scanf("%lld",&n);
    for(i=1;i<=(int)sqrt(n);i++)
    {
        r+=(n/i)-(i-1);
    }
    printf("%lld\n",r);
    return 0;
 
}
