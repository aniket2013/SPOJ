#include<bits/stdc++.h>
int main()
{
    long long int n,i;int fl=0;
    scanf("%lld",&n);
    while(n!=-1){
            fl=0;
 
                for(i=1; i<=n;i++)
    {
        if(3*i*(i-1)+1==n)
        {
            fl=1;break;
        }
        else if(3*i*(i-1)+1>n)
            break;
 
    }
    if(fl==1)
        printf("Y\n");
    else
        printf("N\n");
 
 scanf("%lld",&n);
 
 
}
return 0;
}
