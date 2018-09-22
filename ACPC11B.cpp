#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;int n;int t;
    cin>>t;
    while(t--)
    {
 
 
    int ar1[1009];int ar2[1009];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>ar1[i];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar2[i];
 
    int i=0;int j=0;
    int mini=9999999;
    sort(ar1,ar1+m);
    sort(ar2,ar2+n);
    while(i<m&&j<n)
    {
        int k=abs(ar1[i]-ar2[j]);
        if(k<mini)
        {
            mini=k;
        }
        if(ar1[i]<ar2[j])
            i++;
        else
            j++;
    }
    cout<<mini<<"\n";
        }
 
 
return 0;
}
