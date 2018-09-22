#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
 
    return (*(int *)a-*(int *)b);
 
}
main()
{
    long long int t,arm[100000],s,n,i,arf[100000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&arm[i]);
        for(i=0;i<n;i++)
            scanf("%lld",&arf[i]);
        qsort(arm,n,sizeof(long long int),compare);
        qsort(arf,n,sizeof(long long int),compare);
        s=0;
        for(i=0;i<n;i++)
            s+=(arm[i]*arf[i]);
        printf("%lld\n",s);
    }
}
