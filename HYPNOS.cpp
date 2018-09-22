#include<bits/stdc++.h>
using namespace std;
set<int> s;
int main()
{
    int n,i,j,dig,f=0;int sum=0;int c=0;
    s.clear();
    scanf("%d",&n);
    while(true)
    { if(n!=1)
    {
        c++;
    sum=0;
     while(n!=0)
     {
         dig=n%10;
         sum+=dig*dig;
         n=n/10;
     }
     if(s.find(sum)!=s.end())
     {
         cout<<"-1"<<"\n";break;
     }
     else
     {s.insert(sum);n=sum;}
    }
     else
     {
         printf("%d\n",c);
         break;
     }
 
 
 
     }
return 0;
 
 
    }
 
