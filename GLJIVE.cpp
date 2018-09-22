#include <iostream>
#include <cstdio>
using namespace std;
int modul(int x)
{
	if(x<0)
		return -x;
	return x;
}
int max(int x,int y)
{
	if(x>y)
		return x;
	return y;
}
int main()
{
	int a[12],i,j,n,ans,b,c,d,e;
	n=10;
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	ans=0;
	b=0;
//	for(i=1;i<=n;i++)
//	{
		
		for(j=1;j<=n;j++)
		{
			b=b+a[j];
			if(modul(100-b)<modul(100-ans))
			{
				ans=b;
			}
			else
				if(modul(100-b)==modul(100-ans))
					ans=max(ans,b);
		}
//	}
	printf("%d",ans);
	return 0;
} 
