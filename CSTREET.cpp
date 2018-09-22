#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef pair<int,pii>pi;
 
long long parent[10005];
long long int m,n,p,ans;
void makeset(long long int parent[])
{
    for(long long int i=1;i<=n;i++)
        parent[i]=i;
}
long long int find_set(long long int x)
{
    if(x!=parent[x])
        parent[x]=find_set(parent[x]);
    return parent[x];
 
 
}
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        vector<pi>v;
        vector<pi>mst;
        cin>>p;
        cin>>n>>m;
        makeset(parent);
        for(long long int i=0;i<m;i++)
        {
            long long int x,y,w;
            cin>>x>>y>>w;
            v.push_back(make_pair(w,make_pair(x,y)));
 
        }
        sort(v.begin(),v.end());
        for(long long int i=0;i<v.size();i++)
        {
            pi mp=v[i];
            long long int weight=mp.first;
            long long int u=mp.second.first;
            long long int v=mp.second.second;
            long long int rep_u=find_set(u);
            long long int rep_v=find_set(v);
            if(rep_u!=rep_v)
            {
                mst.push_back(make_pair(weight,make_pair(u,v)));
                parent[rep_v]=rep_u;
            }
 
        }
        ans=0;
        for(long long int i=0;i<mst.size();i++)
        {
            pi mp=mst[i];
            ans+=mp.first;
        }
        cout<<ans*p<<"\n";
 
 
 
    }
    return 0;
 
}
