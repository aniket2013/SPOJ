#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	char s[5001];
	int i,ln,a[10000],t=0,mul=1;
	while(1)
	{
		t=0;mul=1;
	scanf("%s",s);
	if(s[0]=='0')
		break;
	ln=strlen(s);
	a[0]=1;
	for(i=1;i<ln;i++)
	{
		if(s[i]=='0')
		{
			t=0;i++;
			continue;
		}
		if(s[i+1]=='0' && i+1<ln)
		{
			mul*=max(1,a[t]);
			t=0;i+=2;
		}
		else
		{
			a[t+1]= a[t];
			if((s[i-1]-48)*10+s[i]-48 <=26)
				a[t+1]+= (t-1>=0)?a[t-1]:1;
			t++;
		}
	}
	mul*=a[t];
	printf("%d\n",mul);
	}
	return 0;
}
