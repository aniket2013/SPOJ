#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 
    int n,k;int ar[1000010];
    cin>>n;
    int i,j,mx;
    for(i=1;i<=n;i++)
        cin>>ar[i];
cin>>k;
    for(i=1;i<=n-k+1;i++)
    {
          mx=ar[i];
           for(j=i;j<=i+k-1;j++)
           {
               if(ar[j]>mx)
                mx=ar[j];
           }
           cout<<mx<<" ";
 
 
 
    }
return 0;
}
