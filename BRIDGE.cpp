#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;
vector<pi>v;
bool compare(const pair<int,int> &A,const pair<int,int> &B)
{
      if(A.second<=B.second)
	{
		//if(A.first>=B.first)
		return 1;
		//else return 0;
	}
	else
	return 0;
 
 
}
int main()
{
    int t;
   int a[1005];int b[1005];pair<int,int>p1;
int n;
cin>>t;
while(t--)
{
 
 
cin>>n;
v.clear();
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<=n;i++)
   {
       cin>>b[i];
   }
   for(int i=1;i<=n;i++)
   {
       v.push_back(make_pair(b[i],a[i]));
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   {
      p1=v[i];
      b[i+1]=v[i].first;
      a[i+1]=v[i].second;
   }
 //  for(int i=1;i<=n;i++)
   //{
     //  cout<<a[i]<<" "<<b[i]<<"\n";
   //}
   int lis[1005];
   memset(lis,1,sizeof(lis));
   int max;
   for(int i=1;i<=n;i++)
   {
       max=0;
       for(int j=1;j<i;j++)
       {
           if(a[i]>=a[j])
           {
               if(lis[j]>max)
                max=lis[j];
           }
       }
       lis[i]=1+max;
   }
 
  max=0;
  for(int i=1;i<=n;i++)
  {
      if(lis[i]>max)
        max=lis[i];
 
  }
  cout<<max<<"\n";
}
 
return 0;
 
}
