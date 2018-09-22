#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int>pii;
vector <pii>v[100010];
vector <pii>::iterator it;
set<pii> q;
int dist[100010];
int main()
{
    int t,n,m,i,j,k,x,y,w,st,dest;
    scanf("%d",&t);
    while(t--)
    {      q.clear();
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&st);
        scanf("%d",&dest);
        for(i=1;i<100009;i++)
        {
            v[i].clear();
        }
        for(i=1;i<=m;i++)
        {
               scanf("%d",&x);scanf("%d",&y);scanf("%d",&w);
              v[x].push_back(make_pair(w,y));
              v[y].push_back(make_pair(w,x));
 
        }
        for(i=0;i<n+10;i++)
            dist[i]=1e9;
 
 
               q.clear();
        dist[st]=0;
        q.insert(make_pair(0,st));
        while(!q.empty())
        {
            pii top=*(q.begin());
            int v1=top.second;int d=top.first;
            q.erase(q.begin());
            for(it=v[v1].begin();it!=v[v1].end();it++)
            {         pii t=*it;
                int v2=(t.second);int d2=(t.first);
                if((dist[v1]+d2)<dist[v2]){
                 if(dist[v2]!=1e9)
                 {
                     q.erase(q.find(pii(dist[v2],v2)));
                 }
                 dist[v2]=dist[v1]+d2;
                 q.insert(make_pair(dist[v2],v2));}
            }
        }
 
              if(dist[dest]==1e9)
                printf("NONE\n");
              else
 
            printf("%d\n",dist[dest]);
 
 
 
 
    }
 
 
return 0;
        }
