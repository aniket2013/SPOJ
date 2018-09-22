#include<bits/stdc++.h>
using namespace std;
int k;    string str1,str2;
int dp[105][105][105];int dpl[105][105];char strr1[105];char strr2[105];
int func(int m,int n,int k)
{
 
    if(k==0)
        return dp[m][n][k]=0;
    if(m==0||n==0)
        return dp[m][n][k]=0;
    if(dp[m][n][k]!=-1)
        return dp[m][n][k];
    if(strr1[m]==strr2[n])
    {
        return dp[m][n][k]=max((int)strr1[m]+func(m-1,n-1,k-1),max(func(m,n-1,k),func(m,n-1,k)));
 
 
    }
    else
        return dp[m][n][k]=max(func(m,n-1,k),func(m-1,n,k));
 
 
 
 
}
int lcs(int m,int n)
{
 
    if(m==0||n==0)
        return dpl[m][n]=0;
    if(dpl[m][n]!=-1)
        return dpl[m][n];
    if(strr1[m]==strr2[n])
 
        return dpl[m][n]=1+lcs(m-1,n-1);
    else
    return dpl[m][n]=max(lcs(m,n-1),lcs(m-1,n));
 
}
 
int main()
{
 
        int t;
        cin>>t;
        while(t--)
        {
 
        memset(dp,-1,sizeof(dp));
        memset(dpl,-1,sizeof(dpl));
       cin>>str1>>str2;
        cin>>k;
 
      int m=str1.length();
      int n=str2.length();
      for(int i=1;i<=m;i++)
        strr1[i]=str1[i-1];
      for(int i=1;i<=n;i++)
        strr2[i]=str2[i-1];
 
 
   // cout<<(int)str2[0];
   //cout<<m<<" "<<n;
    func(m,n,k);
    lcs(m,n);
 
    if(dpl[m][n]<k)
        cout<<"0\n";
    else
        cout<<dp[m][n][k]<<"\n";
 
 
 
}
return 0;
}
