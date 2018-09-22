#include<bits/stdc++.h>
using namespace std;
int n;long long  int ar[10005];long long int dp[10005];
long long int solve(int i)
{
 
    if(i>=n)
        return dp[i]=0;
        else if(dp[i]!=-1)
            return dp[i];
    else
        return dp[i]=max((ar[i]+solve(i+2)),solve(i+1));
 
 
}
int main()
{
    int t;int h=1;
    cin>>t;
    while(t--)
    {
 
 
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    memset(dp,-1,sizeof(dp));
    solve(0);
    cout<<"Case "<<h<<": "<<dp[0]<<"\n";
 h++;
 
    }
}
