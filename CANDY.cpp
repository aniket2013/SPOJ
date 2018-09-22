#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
    int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
 
main()
{
    long long int n,ar[10000],i,j,s,s1,maxima,k,ans;long long int ar1[10000],ar2[10000];
    scanf("%lld",&n);
    while(n!=-1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        qsort(ar,n,sizeof(long long int),compare);
        s=0;
        for(i=0;i<n;i++)
            s+=ar[i];
        maxima=ar[n-1];
        s1=0;
        if(s%n!=0)
            printf("-1\n");
        else
        {
           k=s/n;
           for(i=0;i<n;i++)
            ar1[i]=k;
 
           for(i=0;i<n;i++)
            ar2[i]=abs(ar[i]-ar1[i]);
 
           for(i=0;i<n;i++)
            s1+=ar2[i];
 
 
                ans=s1/2;
           printf("%lld\n",ans);
        }
        scanf("%lld",&n);
            }
        }
