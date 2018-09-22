#include<bits/stdc++.h>
using namespace std;
 
long long int func(long long int );
long long int pos[100010];long long int t,n,c,i,j,k;
int main()
{
 
 
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(i=0;i<n;i++)
            cin>>pos[i];
        sort(pos,pos+n);
    /*for(i=0;i<n;i++)
            cout<<pos[i];*/
 
       // cout<<pos[0]<<pos[n-1];
         long long int low=0;long long int high=pos[n-1]-pos[0];
    long long int mid;
    while(high-low>1)
    {
         mid=(high+low)/2;
        if(func(mid)==1)
            low=mid;
        else
            high=mid;
    }
 
   cout<<low<<"\n";
    }
   return 0;
}
 
 
long long int func(long long int x)
{
    long long int position=pos[0];long long int cows=1;
    for(i=1;i<n;i++)
    {
        if(pos[i]-position>=x)
        {
            cows++;
            if(cows==c)
                return 1;
 
            position=pos[i];
        }
    }
    return 0;
}
