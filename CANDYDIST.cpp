#include<bits/stdc++.h>
using namespace std;
int comp(long long int a,long long int b)
 
{
 
    if(a<b)
        return (a<b);
    else
        return (a>b);
 
}
int main()
{
 
    long long int n;
    scanf("%lld",&n);
    while(n)
    {
 
 
    vector<long long int>c;
    vector<long long int>p;
      c.clear();p.clear();
    //printf("%lld",n);
    for(int i=0;i<n;i++)
    {
        long long int x;
        scanf("%lld",&x);
        c.push_back(x);
    }
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
   // for(int i=0;i<c.size();i++)
     //  cout<<c[i]<<" ";
    for(int i=0;i<n;i++)
    {
        long long int y;
        scanf("%lld",&y);
        p.push_back(y);
    }
    sort(p.begin(),p.end());
    //for(int i=0;i<n;i++)
      //  cout<<c[i]<<" ";
 
     long long int s=0;
     /* for(int i=0;i<n;i++)
      {
          cout<<c[i]<<" "<<p[i]<<"\n";
      }*/
      for(int i=0;i<c.size();i++)
      {
 
          s+=(c[i]*p[i]);
      }
      printf("%lld\n",s);
      scanf("%lld",&n);
}
return 0;
}
