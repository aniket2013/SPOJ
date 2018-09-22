#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
 
 
    int m,n;
    int ar1[100005];
    int ar2[100005];
    cin>>m;
    if(m==0)
        break;
 
    for(int i=0;i<m;i++)
        cin>>ar1[i];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar2[i];
 
     //cout<<"jhhh\n";
    int s1=0;int s2=0;int result=0;
    int i=0;int j=0;
     while(i<m&&j<n)
     {
 
         if(ar1[i]<ar2[j])
         {
             s1+=ar1[i];
             i++;
         }
         else if(ar2[j]<ar1[i])
         {
             s2+=ar2[j];
             j++;
         }
         else
         {
             result+=max(s1,s2);
             s1=0;s2=0;
             while(i<m&&j<n&&ar1[i]==ar2[j])
             {
                 result+=ar1[i];
                 i++;
                 j++;
             }
         }
     }
    // cout<<"dssdsd";
   // cout<<result<<" "<<s1<<" "<<s2;
     while(i<m)
       {
 
        s1+=ar1[i];i++;}
        //cout<<s1<<"\n";
 
     while(j<n)
        {s2+=ar2[j];j++;}
        //cout<<s2<<"\n";
 
     result+=max(s1,s2);
     cout<<result<<"\n";
 
 
     }
 
return 0;
}
