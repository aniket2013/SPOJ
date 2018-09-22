#include<stdio.h>
long long int mearge_sort(long long int a[],long long int,long long int);
long long int mearge(long long int a[],long long int,long long int,long long int);
int main()
{
    long long int n;long long int ar[200050];long long int t;
       scanf("%lld",&t);
    while(t--)
    {
 
 
    //printf("enter number of elements:");
    scanf("%lld",&n);
    long long int i;
    //printf("the elements are:");
    for(i=0;i<n;i++)
        scanf("%lld",&ar[i]);
 
 
    long long int h=mearge_sort(ar,0,n-1);
          printf("%lld\n",h);}
    /*for(i=0;i<n;i++)
        printf("%d ",ar[i]);*/
 
return 0;
}
long long int mearge_sort(long long int ar[],long long int l,long long int r)
{
    long long int m;
      long long int count=0;
    if(l<r)
    {
         m=(l+r)/2;
        count+=mearge_sort(ar,l,m);
        count+=mearge_sort(ar,m+1,r);
        count+=mearge(ar,l,m,r);
    }
    return count;
}
long long int mearge(long long int ar[],long long int l,long long int m,long long int r)
{
    long long int len=r-l+1;long long int count=0;
    long long int c[200050];
    long long int i=l;
    long long int j=l;long long int k=m+1;
    while(j<=m&&k<=r)
    {
        if(ar[j]<ar[k])
        {
            c[i]=ar[j];j++;
        }
        else
        {
            c[i]=ar[k];k++;
            count+=m-j+1;
 
        }
        i++;
    }
    while(j<=m)
    {
        c[i]=ar[j];
        i++;j++;
    }
    while(k<=r)
    {
        c[i]=ar[k];
        i++;k++;
    }
    int v;
    for(v=l;v<=r;v++)
    {
        ar[v]=c[v];
    }
    return count;
}
