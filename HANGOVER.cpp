#include<stdio.h>
 
int main()
{
    float s=0.00;int i;int pos;float c;
    scanf("%f",&c);
    while(c!=0.00)
    {
 
 s=0.00;
    for(i=2;;i++)
    {
        s=s+(float) 1/i;
 
if(c-s<=0.00)
        {
 
         pos=i;break;
 
    }}
 
    pos=pos-1;
    printf("%d card(s)\n",pos);
    scanf("%f",&c);}
    return 0;
 
}
