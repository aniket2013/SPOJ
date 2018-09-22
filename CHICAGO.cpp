#include<bits/stdc++.h>
using namespace std;
#define MINF -1
int main()
{
    long long int n,m;
    double adj[105][105];
    while(1)
    {
 
 
    cin>>n;
    if(n==0)
        break;
    cin>>m;
 
 
    memset(adj,0,sizeof(adj));
    int x,y;double p;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>p;
        adj[x][y]=p/100;
        adj[y][x]=p/100;
    }
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }*/
 
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i!=j&&j!=k&&k!=i)
                {
 
 
                if((adj[i][k]*adj[k][j])>adj[i][j])
                    adj[i][j]=adj[i][k]*adj[k][j];
 
 
           // cout<<i<<" "<<k<<" "<<j<<": "<<adj[i][k]<<" "<<adj[k][j]<<" "<<adj[i][j]<<"\n";
            }
            }
        }
    }
 
   /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<adj[i][j]<<" ";
 
        cout<<"\n";
    }*/
    printf("%.6lf percent\n",adj[1][n]*100);
 
 
    }
    return 0;
 
 
 
 
}
