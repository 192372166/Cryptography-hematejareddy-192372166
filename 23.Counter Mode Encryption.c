#include<stdio.h>
int main(){
 int p[3]={2,4,6},ctr=1,i;
 for(i=0;i<3;i++){
  printf("%d ",p[i]^ctr);
  ctr++;
 }
}
