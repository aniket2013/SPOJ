#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1000;
    int prime[2002];
    int lucky[3000];
    for(int i=2;i<=1000;i++)
        prime[i]=1;
      for(int i=2;i<=n;i++)
      {
          if(prime[i]==1)
          {
              for(int j=2;i*j<=1000;j++)
              {
                  prime[i*j]=0;
              }
          }
      }
      int j=0;int primar[1002];
   for(int i=2;i<=1000;i++)
   {
      if(prime[i]==1)
      {
          primar[j]=i;
          j++;
      }
   }
   //for(int i=0;i<j;i++)
    //cout<<primar[i]<<"\n";
 
   int l=1;int ans[3003];
   for(int i=1;i<=3000;i++)
   {
       int cnt=0;
       for(int k=0;k<j;k++)
       {
           if(i%primar[k]==0)
            cnt++;
 
       }
       if(cnt>=3)
       {
       // cout<<i<<"\n";
       ans[l]=i;l++;
       }
   }
   int t;
cin>>t;
while(t--)
{
    cin>>n;
    cout<<ans[n]<<"\n";
}
return 0;
}
