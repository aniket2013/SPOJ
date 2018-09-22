#include<stdio.h>
#include<math.h>
main()
{
 
    long long int t,s,a,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
 
        s=0;
        for(i=0;i<n;i++)
            {
                scanf("%lld",&a);
                s=(s+a)%n;
            }
            if(s==0)
                printf("YES\n");
            else
                printf("NO\n");
    }
}
