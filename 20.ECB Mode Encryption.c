#include<stdio.h>
int main(){
 int p[4],k=5,i;
 for(i=0;i<4;i++) scanf("%d",&p[i]);
 for(i=0;i<4;i++) printf("%d ",p[i]^k);
}
