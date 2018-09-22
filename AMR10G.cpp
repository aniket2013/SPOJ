#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n,k;int t;
    long long int ar[20005];long long int ar1[20005];
    cin>>t;
    while(t--)
    {
 
 
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
        cin>>ar[i];
 
    sort(ar,ar+n);
    int m=0;
    for(int i=0;i<=n-k;i++)
    {
      // ans=min(ans,(ar[i+k]-ar[i]));
 
       ar1[m]=abs(ar[i+k-1]-ar[i]);
       m++;
    }
    long long int ans=ar1[0];
    for(int i=1;i<m;i++)
    {
        if(ar1[i]<ans)
            ans=ar1[i];
    }
    cout<<ans<<"\n";
    }
 
    return 0;
}
