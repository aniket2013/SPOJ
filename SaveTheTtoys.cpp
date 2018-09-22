#include<bits/stdc++.h>
using namespace std;
 long long int t,n,ar[100010],dp[100010];
long long int func(long long int i)
{
 
    if(i>n-1)
        return 0;
        if(dp[i]!=-1)
            return dp[i];
    else
        return dp[i]=max(ar[i]+func(i+2),max((ar[i]+ar[i+1]+func(i+4)),(ar[i]+ar[i+1]+ar[i+2]+func(i+6))));
 
}
int main()
{
 
 
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        memset(ar,0,sizeof(ar));
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
            scanf("%lld",&ar[i]);
        func(0);
        printf("%lld\n",dp[0]);
    }
 
return 0;
}
