#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    set<int>s;int ar[1000005];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
 
     cin>>ar[i];
      s.insert(ar[i]);
    }
    sort(ar,ar+n);int c=0;
    for(int i=0;i<n;i++)
    {
        int x=ar[i]+k;
        if(s.find(x)!=s.end())
        {
            c++;
        }
    }
    cout<<c<<"\n";
 
 
 
 
}
