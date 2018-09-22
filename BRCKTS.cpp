#include<cstdio>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
struct node
{
    int open,close;
};
struct  node makenode(int open,int close)
{
    struct node tmp;
    tmp.open=open;
    tmp.close=close;
    return tmp;
}
char ar[300000];node tree[1200000];
node merge(node l,node r)
{
    int newmatches=min(l.open,r.close);
    int open=l.open+r.open-newmatches;
    int close=l.close+r.close-newmatches;
     return makenode(open,close);
 
}
void build(int start,int end,int current)
{
    if(start==end)
    {
        if(ar[start]=='(')
        {
            tree[current]=makenode(1,0);
 
 
        }
        else
        {
            tree[current]=makenode(0,1);
        }
        return ;
    }
    int mid=(start+end)/2;
    build(start,mid,2*current);
    build(mid+1,end,2*current+1);
    tree[current]=merge(tree[2*current],tree[2*current+1]);
    return;
}
 
void update(int start,int end,int current,int idx)
{
    if(start==end)
    {
        if(tree[current].open==1)
        {
            tree[current]=makenode(0,1);
 
        }
        else
        {
            tree[current]=makenode(1,0);
 
        }
        return;
    }
    int mid=(start+end)/2;
    if(idx<=mid)
        update(start,mid,2*current,idx);
    else if(idx>mid)
        update(mid+1,end,2*current+1,idx);
    tree[current]=merge(tree[2*current],tree[2*current+1]);
}
int main() {
    int stlen, m, k;
int j,l;
    for(int i = 1; i<=10; i++){
 
        printf("Test %d:\n",i);
        scanf("%d",&stlen);
        scanf(" %s",ar);
        stlen--;
        build(0,stlen,1);
        scanf("%d",&m);
        while(m--){
            scanf("%d",&k);
            if(k==0){
 
 
 
 
                //else
                //    cout<<sum[1].open_brackets<<" "<<sum[1].close_brackets;
                    if(tree[1].close==0&&tree[1].open==0){
                        printf("YES\n");
                    }
                    else{
                        printf("NO\n");
                    }
                }
 
            //
            else{
                update(0,stlen,1,k-1);
            }
        }
    }
    return 0;
}
