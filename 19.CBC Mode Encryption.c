#include<stdio.h>
int main(){
 int p[4],c[4],iv,i;
 scanf("%d",&iv);
 for(i=0;i<4;i++) scanf("%d",&p[i]);
 c[0]=p[0]^iv;
 for(i=1;i<4;i++) c[i]=p[i]^c[i-1];
 for(i=0;i<4;i++) printf("%d ",c[i]);
}
