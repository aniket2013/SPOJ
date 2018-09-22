#include<bits/stdc++.h>
using namespace std;
int dp[2010][2010];
int t;
    char str1[2010],str2[2010];
int minimum(int a,int b,int c)
{
    return min(a,min(b,c));
}
int edist(char str1[],char str2[],int m,int n)
{
 
 
 
 
    if(m==0)
    {
 
          //cout<<m<<"@ @"<<n<<" "<<dp[m][n]<<"\n";
    return dp[m][n]=n;}
    else if(n==0)
    {
       //cout<<m<<"  "<<n<<"  "<<"\n";
       //cout<<m<<"@ @"<<n<<" "<<dp[m][n]<<"\n";
       return dp[m][n]=m;
     }
   /* else if (dp[m][n]!=-1)
     {
         cout<<m<<"&&&"<<n<<"&&&"<<dp[m][n]<<"\n";
     return dp[m][n];
 
 
     }*/
     else if(dp[m][n]!=-1)
        return dp[m][n];
 
    else if(str1[m-1]==str2[n-1])
       { //cout<<m-1<<" "<<n-1<<"\n";
          // cout<<m<<"# #"<<n<<" "<<dp[m][n]<<"\n";
         return dp[m][n]=edist(str1,str2,m-1,n-1);
       }
    else
 
 
    //   cout<<m-1<<" "<<n-1<<" "<<dp[m][n]<<"\n";
//c//out<<m<<"* *"<<n<<" "<<dp[m][n]<<"\n";
        return dp[m][n]=1+minimum(edist(str1,str2,m,n-1),edist(str1,str2,m-1,n),edist(str1,str2,m-1,n-1));
 
    }
 
 
int main()
{
 
    cin>>t;
    while(t--)
    {
 
 
    int i,j,k;
    scanf("%s",&str1);
    scanf("%s",&str2);
    int m=strlen(str1);
    int n=strlen(str2);
 
   // for(i=1;i<=m;i++)
        //cout<<str3[i];
 
 
 
for(i=1;i<=m;i++)
{
    for(j=1;j<=n;j++)
        dp[i][j]=-1;
}
    edist(str1,str2,m,n);
    //cout<<k<<"\n";
 
    /*for(i=0;i<=m+1;i++)
    {
        for(j=0;j<=n+1;j++)
            cout<<dp[i][j]<<" ";
 
 
            cout<<"\n";
    }*/
 
    cout<<dp[m][n]<<"\n";
}
return 0;
}
