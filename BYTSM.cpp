#include<bits/stdc++.h>
using namespace std;
int r,c;long long int ar[105][105];long long int dp[105][105];
int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
long long int func(int i,int j)
{
    if(i==r)
        return dp[i][j]=ar[i][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(j==1)
        return dp[i][j]=max(ar[i][j]+func(i+1,j),ar[i][j]+func(i+1,j+1));
    if(j==c)
        return dp[i][j]=max(ar[i][j]+func(i+1,j),ar[i][j]+func(i+1,j-1));
    else
        return dp[i][j]=max(ar[i][j]+func(i+1,j-1),max(ar[i][j]+func(i+1,j),ar[i][j]+func(i+1,j+1)));
 
 
 
 
 
}
int main()
{
    int t;
      cin>>t;
      while(t--)
      {
 
 
     memset(dp,-1,sizeof(dp));
    cin>>r>>c;
 
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
            cin>>ar[i][j];
    }
      long long int  maxim=-9999999;
        for(int j=1;j<=c;j++)
        {
            dp[1][j]=func(1,j);
            //cout<<dp[1][j]<<" ";
            if(dp[1][j]>maxim)
            maxim=dp[1][j];
 
        }
        cout<<maxim<<"\n";
      }
 
return 0;
}
