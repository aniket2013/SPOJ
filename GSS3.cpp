#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
struct node
{
    long long int sum,maxprefix,maxsuffix,result;
};
 struct node tree[240000];long long int ar[60000];
struct node makenode(long long int maxprefix,long long int maxsuffix,long long int sum,long long int result)
{
    node tmp;
    tmp.sum=sum;
    tmp.maxprefix=maxprefix;
    tmp.maxsuffix=maxsuffix;
    tmp.result=result;
 
    return tmp;
}
struct node merge(node,node);
struct node merge(node l,node r)
{
    long long int sum=l.sum+r.sum;
    long long int maxprefix=max(l.maxprefix,l.sum+r.maxprefix);
    long long int maxsuffix=max(r.maxsuffix,r.sum+l.maxsuffix);
    long long int result=max(max(l.result,r.result),l.maxsuffix+r.maxprefix);
    return makenode(maxprefix,maxsuffix,sum,result);
 
}
void build(long long int start,long long int end,long long int current)
{
    if(start==end)
    {
        tree[current]=makenode(ar[start],ar[start],ar[start],ar[start]);
        return ;
    }
    long long int mid=(start+end)/2;
    build(start,mid,2*current);
    build(mid+1,end,2*current+1);
    tree[current]=merge(tree[2*current],tree[2*current+1]);
   return ;
 
}
void update(long long int start,long long int end,long long int idx,long long int val,long long int current)
{
    if(start==end)
    {
        tree[current]=makenode(val,val,val,val);
        ar[start]=val;
        return;
    }
    long long int mid=(start+end)/2;
    if(idx>=start&&idx<=mid)
        update(start,mid,idx,val,2*current);
    if(idx>mid&&idx<=end)
        update(mid+1,end,idx,val,2*current+1);
    tree[current]=merge(tree[2*current],tree[2*current+1]);
}
node query(long long int start,long long int end,long long int xl,long long int xr,long long int current)
{
    if(xl==start&&xr==end)
        return tree[current];
    long long int mid=(start+end)/2;
    if(xr<=mid)
        return query(start,mid,xl,xr,2*current);
    if(xl>mid)
        return  query(mid+1,end,xl,xr,2*current+1);
     node l=query(start,mid,xl,mid,2*current);
    node r=query(mid+1,end,mid+1,xr,2*current+1);
    return(merge(l,r));
}
 
int main()
{
    long long int n;
    //printf("enter the size of the input array:");
    scanf("%lld",&n);
    long long int i;
    //printf("enter the elements:");
    for(i=1;i<n+1;i++)
        scanf("%lld",&ar[i]);
        int size=4*n;
    build(1,n,1);
    /*for(i=1;i<size;i++)
       {printf("%d",i);
        printf(" %d\n",tree[i].sum);}*/
      long long int m;
      scanf("%lld",&m);
      while(m--)
      {
 
 
 
 
    /*printf("enter the index and value:");
    int idx,val;
    scanf("%d",&idx);
    scanf("%d",&val);
    update(0,n-1,idx,val,1);
     for(i=1;i<size;i++)
       {printf("%d",i);
        printf(" %d\n",tree[i].sum);}*/
        /*for(i=1;i<n+1;i++)
            printf("%d ",ar[i]);*/
        long long int o,p,q;
       // printf("enter the range:");
       scanf("%lld",&o);
        scanf("%lld",&p);
        scanf("%lld",&q);
        if(o==1){
        long long int k=query(1,n,p,q,1).result;
        printf("%lld\n",k);}
        else
            update(1,n,p,q,1);
      }
 
 
return 0;
}
 
