#include<bits/stdc++.h>
using namespace std;
int dp[3][1005][1005];
int func(int c,int h,int a)
{
    if(h<=0||a<=0)
        return 0;
    if(dp[c][h][a]!=-1)
       return dp[c][h][a];
    if(c==0)
    {
 
          return dp[0][h][a]=1+max(func(1,h+3,a+2),func(2,h-5,a-10));
 
 
    }
    if(c==1)
    {
        return dp[1][h][a]=1+max(func(0,h-20,a+5),func(2,h-5,a-10));
    }
    if(c==2)
    {
        return dp[2][h][a]=1+max(func(1,h+3,a+2),func(0,h-20,a+5));
    }
 
 
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
 
memset(dp,-1,sizeof(dp));
 /*for(int i=0;i<3;i++)
 {
     for(int j=0;j<1005;j++)
     {
         for(int k=0;k<1005;k++)
            dp[i][j][k]=-1;
     }
 }*/
    int c=0;
    int h,a;
    cin>>h>>a;
    func(0,h,a);
      cout<<dp[0][h][a]-1<<"\n";
    //cout<<dp[0][h][a]<<"\n";
 
    }
    return 0;
}
