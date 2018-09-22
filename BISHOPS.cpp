#include<stdio.h>
#include<string.h>
int main()
{
    char a;long long int ar[1000];char str[1000];long long i=0;
    while(scanf("%s",str)!=EOF)
    {
       long long int l=strlen(str);
       for(i=0;i<l;i++)
        ar[i]=str[i]-'0';
       //for(i=0;i<l;i++)
       // printf("%d",ar[i]);
       if(l==1&&ar[0]==1)
        printf("1\n");
       else{
       long long int ar2[1000];
       for(i=0;i<=l-2;i++)
        ar2[i]=9;
 
       ar2[l-1]=8;
       //for(i=0;i<l;i++)
        //printf("%d",ar2[i]);
        int carry=0;long long int ar3[1000];
        for(i=l-1;i>=0;i--)
        {
            long long int s=ar[i]+ar2[i]+carry;
            if(s<=9)
            {
                carry=0;ar3[i]=s;
            }
            else
            {
                carry=1;
                ar3[i]=s%10;
            }
        }
        long long int ar4[1000];
        //for(i=0;i<l;i++)
        //printf("%d",ar3[i]);
        for(i=0;i<=l-2;i++)
        ar4[i]=0;
 
        ar4[l-1]=carry;
 carry=0;long long int ar5[1000];
        for(i=l-1;i>=0;i--)
        {
            long long int s=ar3[i]+ar4[i]+carry;
            if(s<=9)
            {
                carry=0;ar5[i]=s;
            }
            else
            {
                carry=1;
                ar5[i]=s%10;
            }
        }
 
       /*for(i=0;i<l;i++)
        printf("%d",ar5[i]);*/
 
        carry=0;
        long long int ar6[10000];
        for(i=1;i<=l;i++)
        {
            ar6[i]=ar5[i-1];
        }
        ar6[0]=0;
        /*for(i=0;i<l+1;i++)
            printf("%lld",ar6[i]);*/
 
        carry=0;long long int ar7[1000];
        for(i=l;i>=0;i--)
        {
            long long int s=2*ar6[i]+carry;
            if(s<=9)
            {
                carry=0;ar7[i]=s;
            }
            else
            {
                carry=1;
                ar7[i]=s%10;
            }
        }
         // for(i=0;i<l+1;i++)
           // printf("%lld",ar7[i]);
                   long long int pos;
            for(i=0;i<l+1;i++)
            {
                if(ar7[i]!=0)
                {
                pos=i;break;}
            }
            for(i=pos;i<l+1;i++)
                printf("%lld",ar7[i]);
                printf("\n");
                }
    }
    return 0;
            }
 
