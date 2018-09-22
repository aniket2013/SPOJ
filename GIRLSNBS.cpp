#include<stdio.h>
#include<math.h>
int main()
{
    long long int  g,b,intans;double ans,mini,maxi;
    scanf("%lld",&g);
    scanf("%lld",&b);
    while(g!=-1&&b!=-1)
    {
        if(g>=b)
           {
 
            mini=b;maxi=g;}
        else
            {mini=g;maxi=b;}
            ans=maxi/(mini+1);
                ans=ceil(ans);
                intans=(int)ans;
            printf("%d\n",intans);
            scanf("%lld",&g);
            scanf("%lld",&b);
 
 
 
    }
    return 0;
}
