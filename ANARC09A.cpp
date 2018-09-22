#include<stdio.h>
#include<string.h>
int main(){
 int a,b,c=1,d,i,j;
 char ar[100000];
 while(1){
  int y=0,z=0;
  d=0;
  scanf("%s",ar);
  if(ar[0]=='-'){
   break;
  }
  a=strlen(ar);
  for(i=0;i<a;i++){
   if(ar[i]=='{'){
    y++;
   }else if(ar[i]=='}'){
    z++;
   }
   if(z<=y){
    y-=z;
    z=0;
   }else{
    d+=1;
    y++;
    z--;
   }
  }
  if(y>z){
   y-=z;
   d+=y/2;
  }else if(z>y){
   z-=y;
   d+=z/2;
  }
  printf("%d. %d\n",c,d);
  c++;
 }
 return 0;
} 
