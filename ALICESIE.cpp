#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;int ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            ans=n/2;
        else
            ans=(n/2)+1;
        cout<<ans<<"\n";
 
}
return 0;
    }
