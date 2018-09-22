#define pi 3.141592654
 
#include<stdio.h>
#include<math.h>
int main()
{
     long long int l;
     float ans;
     scanf("%lld",&l);
     while(l!=0)
     {
         ans=(float)(l*l)/(float)(2*pi);
         printf("%.2f\n",ans);
         scanf("%lld",&l);
 
     }
     return 0;
}
