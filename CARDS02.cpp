#include<bits/stdc++.h>
#define M 1000007
using namespace std;
int main()
{
    long long int t,n,ans,i,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;s=0;
        ans=(3*n*(n+1))/2-(n);
        ans=ans%M;
        cout<<ans<<endl;
    }
    return 0;
}
