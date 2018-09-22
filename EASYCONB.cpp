#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
        ans*=a;
 
    return ans;
}
int findans(int n)
{
 
 
           int ar[100];
    int tmp=n;int dig;int j=0;
    while(tmp!=0)
    {
        dig=tmp%2;
        ar[j]=dig;
        j++;
        tmp=tmp/2;
 
    }
    int pos=0;
    for(int i=0;i<j;i++)
    {
        if(ar[i]==1)
        {
            pos=i;
            break;
        }
    }
    int k=0;int ans=0;
    for(int i=j-1;i>=pos;i--)
    {
        int m=power(2,k);
        ans+=(ar[i]*m);
        k++;
 
    }
return ans;
}
 
int main()
{
    int n;int t;vector<int>v;
 
 
 
 
    cin>>t;
    for(int i=0;i<t;i++)
 
    {  cin>>n;v.push_back(n);}
    for(int i=0;i<t;i++)
    {
 
     n=v[i];
     if(n%2==0)
     {
         int ans=findans(n);
         cout<<ans<<"\n";
     }
      else
    cout<<n<<"\n";
    }
    return 0;
}
