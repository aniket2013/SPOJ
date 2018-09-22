#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 
    int mp[10005];
    set<int>s;
    memset(mp,9999,sizeof(mp));
    int n;
    cin>>n;int ar[1005];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            mp[x]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        mp[ar[i]]=0;
    }
    for(int i=0;i<10000;i++)
    {
        if(mp[i]==1)
        {//cout<<i<<"\n";
            s.insert(i);}
    }
    cout<<s.size()<<"\n";
    return 0;
}
