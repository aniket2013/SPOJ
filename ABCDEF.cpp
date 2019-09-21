#include<bits/stdc++.h>
using namespace std;
long long int ar[1000];long long int ar1[1000];long long int ar2[1000];long long int n;long long int i,j,k;vector<int>v;vector<long long int>v1;vector<long long int>v2;

int main()
{

    long long int  m;
    cin>>n;
int x;
    for(i=0;i<n;i++)
      {
          cin>>ar[i];
      }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                m=ar[i]*ar[j]+ar[k];
                v1.push_back(m);
                }
        }

    }


         for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {         if(ar[i]==0)
            continue;
               m=ar[i]*(ar[j]+ar[k]);
                      v2.push_back(m);
                }
        }

    }

       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
long long int ans=0;
for(i=0;i<v1.size();i++)
{
     m=v1[i];
long long int lb=lower_bound(v2.begin(),v2.end(),m)-(v2.begin());
long long int ub=upper_bound(v2.begin(),v2.end(),m)-(v2.begin());
ans+=ub-lb;

}
cout<<ans<<"\n";
return 0;
}
