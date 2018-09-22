#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];int dp[1000][1000];
int n,m;
int func(int idx,int m)
{
    if(m<0)
        return dp[idx][m]=0;
    else if(idx==1)
    {
        if(m>=a[idx]&&m<=b[idx])
            return dp[idx][m]=1;
        else
            return dp[idx][m]=0;
    }
    if(dp[idx][m]!=-1)
        return dp[idx][m];
    int ret=0;
    for(int i=a[idx];i<=b[idx];i++)
        ret+=func(idx-1,m-i);
 
        return dp[idx][m]=ret;
}
int main()
{
 
    int t;
    cin>>n>>m;
    while(n!=0&&m!=0)
    {
 
     memset(dp,-1,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i];
        }
        func(n,m);
        cout<<dp[n][m]<<"\n";
       cin>>n>>m;
    }
 
 
}
