#include<stdio.h>
int main()
{
    long long int t,ng,nm,i,m1,m2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&ng);
        scanf("%lld",&nm);
        long long int ag[ng],amg[nm];
        for(i=0;i<ng;i++)
            scanf("%lld",&ag[i]);
        for(i=0;i<nm;i++)
            scanf("%lld",&amg[i]);
 
        m1=ag[0];m2=amg[0];
        for(i=0;i<ng;i++)
        {
            if(ag[i]>m1)
                m1=ag[i];
        }
        for(i=0;i<nm;i++)
        {
            if(amg[i]>m2)
                m2=amg[i];
        }
        if(m1>=m2)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}
