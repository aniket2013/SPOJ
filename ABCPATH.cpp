#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
using namespace std;
typedef pair<int,int>pii;
 
vector<pii>v;
 int r,c;
 char ar[55][55];int dist[55][55];int maxi=0;int vis[55][55];
 int sx[8]={0,1,0,-1,-1,1,1,-1};
 int  sy[8]={1,0,-1,0,1,1,-1,-1};
 int countv=0;
 void dfs(int x,int y,int d)
 {
     vis[x][y]=1;
     countv=max(countv,d);
     //int maxi=-99999999;
       //cout<<x<<" "<<y<<"\n";
     for(int i=0;i<8;i++)
     {
 
             int tx=x+sx[i];int ty=y+sy[i];
             if(tx>=0&&tx<r&&ty>=0&&ty<c&&vis[tx][ty]==0&&(((int)ar[tx][ty]-(int)ar[x][y])==1))
             { //cout<<tx<<" "<<ty<<"\n";
 
                      //if(tx==3&&ty==3)
                        //cout<<x<<" "<<y<<"\n";
 
 
 
 
 
 
                    //dist[tx][ty]=maxi;
 
                      /* if(1+dist[x][y]>maxi)
                       {
                           maxi=dist[x][y]+1;
 
                       }*/
 
 
 
                       //cout<<maxi<<"\n";
                     dfs(tx,ty,d+1);
                     //cout<<tx<<" "<<ty<<"\n";
 
                 }
 
 
 
         }
 
//vis[x][y]=0;
 
 
 
 
 
 }
int main()
{
    int t=1;
 
    while(1)
    {
        //v.clear();
       cin>>r>>c;
       countv=0;
        v.clear();
       if(r==0&&c==0)
        break;
        //cout<<c<<r;
 
        for(int i=0;i<r;i++)
        {
 
                scanf("%s",ar[i]);
 
        }
 
        memset(vis,0,sizeof(vis));
        memset(dist,0,sizeof(dist));
         int pl=0;
        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<"\n";
        }*/
        int x,y;
        //dfs(1,1);
        for(int i=0;i<r;i++)
        {
               for(int j=0;j<c;j++)
               {
                   if(ar[i][j]=='A')
                    {
                        //cout<<i<<" "<<j<<"\n";
                        v.push_back(make_pair(i,j));
               }
               }
 
        }
        for(int i=0;i<v.size();i++)
        {
            int x=v[i].first;
            int y=v[i].second;
            dfs(x,y,1);
        }
       /* for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<dist[i][j]<<" ";
            }
            cout<<"\n";
        }*/
    //printf("Maximum rope length is %d.\n",maxi);
    cout<<"Case "<<t<<":"<<" "<<countv<<"\n";
       t++;
 
    }
 
 
return 0;
 
}
