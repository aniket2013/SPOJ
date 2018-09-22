#include<bits/stdc++.h>
using namespace std;
char ar[110][110];int vis[110][110];int r,c;int t,n;
int arx[] = {-1, -1, -1,  0,  1,  1, 1, 0};
int ary[] = { 1,  0, -1, -1, -1,  0, 1, 1};
string str="ALLIZZWELL";
int dfs(int x,int y,int pid)
{
    if(ar[x][y]!=str[pid])
    {
        return 0;
    }
    if(pid==n-1)
        return 1;
 
    vis[x][y]=1;
    for(int i=0;i<8;i++)
    {
        int xc=x+arx[i];
        int yc=y+ary[i];
        if((xc>=0)&&(yc>=0)&&(xc<r)&&(yc<c)&&(vis[xc][yc]==0))
        {
            if(dfs(xc,yc,pid+1))
                return 1;
        }
 
    }
    vis[x][y]=0;
    return 0;
 
 
}
int main()
{
 
 
 
    int t;
    n=10;
    cin>>t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        cin>>r>>c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>ar[i][j];
            }
        }
       /* for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<ar[i][j]<<" "<<vis[i][j]<<" ";
 
            }
            cout<<"\n";
        }*/
        int fl=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(dfs(i,j,0))
                {
                    fl=1;
                    break;
                }
            }
            if(fl==1)
                break;
        }
        if(fl==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
 
 
 
 
    }
    return 0;
}
