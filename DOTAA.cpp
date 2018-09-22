#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;int i,j,k,cnt,n,m,d,max,pos;int ar[1000];
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>d;
        for(i=0;i<n;i++)
            cin>>ar[i];
 
        cnt=0;
        while(cnt!=m)
        {
         max=ar[0];pos=0;
         for(i=1;i<n;i++)
         {
             if(ar[i]>max)
             {
                 max=ar[i];pos=i;
             }
         }
         if((max-d)>0)
         {
             ar[pos]=ar[pos]-d;
             cnt++;
             max=max-d;
         }
         else
         {
             break;
         }
        }
        if(cnt==m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
 
 
    }
 
    return 0;
 
}
