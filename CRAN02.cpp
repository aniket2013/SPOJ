#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    long long int ar[1000005];
    int n;
    cin>>t;
    while(t--)
    {
 
        cin>>n;
         map<long long int,long long int>mp;
       map<long long int,long long int>::iterator it;
        cin>>ar[0];mp[ar[0]]++;
        for(int i=1;i<n;i++)
            {
                cin>>ar[i];
                ar[i]=ar[i]+ar[i-1];
                mp[ar[i]]++;
            }
 
 
 
        /*for(int i=0;i<n;i++)
            cout<<s[i]<<"\n";*/
 
 
        long long int co=0;
       for(it=mp.begin();it!=mp.end();it++)
       {
           long long int r=it->first;
           long long int s=it->second;
           if(r!=0)
           {
               co+=((s*(s-1))/2);
           }
           else
           {
               co+=s+((s*(s-1))/2);
           }
       }
       cout<<co<<"\n";
       mp.clear();
 
 
    }
    return 0;
 
}
 
