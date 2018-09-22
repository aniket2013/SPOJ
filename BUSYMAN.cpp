#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    if(b.second>a.second)
        return b.second>a.second;
    else
        return a.second>b.second;
 
 
}
int main()
{
 
      int t;
      cin>>t;
      while(t--)
      {
 
 
     vector< pair<int,int> > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;int y;
        cin>>x>>y;
        v.push_back(make_pair(y,x));
    }
    vector< pair<int,int> >v1;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i].second<<" "<<v[i].first<<"\n";
         int p=v[i].second;int q=v[i].first;
         v1.push_back(make_pair(p,q));
 
    }
   int c=1;
   pair<int,int>pa=v1[0];vector< pair<int,int> >v2;
   v2.push_back(make_pair(pa.first,pa.second));
   for(int i=1;i<n;i++)
   {
       if(v1[i].first>=pa.second)
       {
           c++;
           pa=v1[i];
           v2.push_back(make_pair(pa.first,pa.second));
       }
 
 
 
   }
   cout<<v2.size()<<"\n";
  /* for(int i=0;i<v2.size();i++)
   {
       cout<<v2[i].first<<" "<<v2[i].second<<"\n";
   }*/
 
      }
 
   }
