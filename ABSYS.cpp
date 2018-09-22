#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    char n1[1000],n2[1000],n3[1000],pl[3],equi[3];long long int t,i,s2,s3,s1;;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s%s%s%s%s",n1,pl,n2,equi,n3);
        //printf("%s %s %s %s %s\n",&n1,&pl,&n2,&equi,&n3);
 
        if(strstr(n1,"machula")!=NULL)
        {       s1=0;s2=0;s3=0;
            for(i=0;i<strlen(n2);i++)
                s2=s2*10+(n2[i]-'0');
            for(i=0;i<strlen(n3);i++)
                s3=s3*10+(n3[i]-'0');
 
            s1=s3-s2;
 
            printf("%lld + %lld = %lld\n",s1,s2,s3);
        }
        else if(strstr(n2,"machula")!=NULL)
        {       s1=0;s3=0;
            for(i=0;i<strlen(n1);i++)
                s1=s1*10+(n1[i]-'0');
            for(i=0;i<strlen(n3);i++)
                s3=s3*10+(n3[i]-'0');
 
            s2=s3-s1;
 
            printf("%lld + %lld = %lld\n",s1,s2,s3);
        }
        else if(strstr(n3,"machula")!=NULL)
        {       s1=0;s2=0;
            for(i=0;i<strlen(n1);i++)
                s1=s1*10+(n1[i]-'0');
            for(i=0;i<strlen(n2);i++)
                s2=s2*10+(n2[i]-'0');
 
            s3=s1+s2;
 
            printf("%lld + %lld = %lld\n",s1,s2,s3);
        }
 
 
 
        }
 
 
    }
