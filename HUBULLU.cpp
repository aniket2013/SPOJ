#include<bits/stdc++.h>
using namespace std;
set<long long int> s;set<long long int>::iterator it;
int main()
{
 
 
    long long int t,n;int p1,p2,i,w;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%d",&i);
        p1=i;
        p2=!i;
        /*printf("%d",p1);
        printf("%d",p2);*/
       if(p1==0)
        printf("Airborne wins.\n");
       else
        printf("Pagfloyd wins.\n");
    }
return 0;
 
}
