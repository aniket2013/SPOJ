#include<bits/stdc++.h>
using namespace std;
 
int vis[1000005];int dist[1000005];
int main()
{
    int f,src,dest,up,down;
    memset(vis,0,sizeof(vis));
    memset(dist,-1,sizeof(dist));
    cin>>f>>src>>dest>>up>>down;
    queue<int>q;
    dist[src]=0;
    vis[src]=1;
    q.push(src);
 
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        int upx=curr+up;
        int downx=curr-down;
        if(upx<=f&&vis[upx]==0)
        {
            vis[upx]=1;
            dist[upx]=dist[curr]+1;
            q.push(upx);
        }
        if(downx>=1&&vis[downx]==0)
        {
            vis[downx]=1;
            dist[downx]=dist[curr]+1;
            q.push(downx);
        }
    }
     if(dist[dest]==-1)
            cout<<"use the stairs";
     else
        cout<<dist[dest];
 
 
    return 0;
}
