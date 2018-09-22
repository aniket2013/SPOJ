#include<bits/stdc++.h>
using namespace std;
string str;int l;
int dp[6105][6105];
int func(int i,int j)
{
 
    if(i==j)
        return dp[i][j]=0;
    else if(i>j)
    return dp[i][j]=1e9;
    else if(j==i+1)
    {
        if(str[i]==str[j])
            return dp[i][j]=0;
        else
            return dp[i][j]=1;
    }
    else if(dp[i][j]!=-1)
        return dp[i][j];
    else if(str[i]==str[j])
        return dp[i][j]=func(i+1,j-1);
    else
        return dp[i][j]=1+min(func(i+1,j),func(i,j-1));
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>str;
        l=str.length();
        func(0,l-1);
        cout<<dp[0][l-1]<<"\n";
    }
 
 
}
