#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
void bfs(int,int);
typedef pair<int,int>pii;
queue<int>q;
 
int dis[200][200];int m,n,i,j;char ch;
    int t;int ar[200][200];
    int myarrx[]={-1,0,1,0};
int myarry[]={0,-1,0,1};
int main()
{
    cin>>t;
    while(t--)
    {         vector<pii>v;
        cin>>m;
        cin>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ch;
                if(ch=='1')
                {
                  v.push_back((make_pair(i,j)));
                  //dis[i][j]=-INF;
                  ar[i][j]=ch;
                }
                else
                {dis[i][j]=INF;ar[i][j]=ch;}
            }
        }
        /*for(i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<"\n";
        }*/
       for(i=0;i<v.size();i++)
        bfs(v[i].first,v[i].second);
 
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<dis[i][j]<<" ";
            }
            cout<<"\n";
        }
        v.clear();
 
    }
return 0;
 
 
}
 
void bfs(int i,int j)
{
    queue<int>q;
    dis[i][j]=0;
    q.push(i);
    q.push(j);
    while(!q.empty())
    {
 
    int x=q.front();
    q.pop();
    int y=q.front();
    q.pop();
    int dist=dis[x][y]+1;
   for(i=0;i<4;i++)
   {
       int xc=x+myarrx[i];int yc=y+myarry[i];
       if(xc>=0&&xc<=m&&yc>=0&&yc<=n)
       {
           if(dist<dis[xc][yc])
           {
               q.push(xc);
               q.push(yc);
               dis[xc][yc]=dist;
           }
       }
 
 
   }
    }
}
