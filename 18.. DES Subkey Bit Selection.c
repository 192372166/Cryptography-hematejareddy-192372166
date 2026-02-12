#include<stdio.h>
int main(){
 int key[56],subkey[48],i;
 for(i=0;i<56;i++) scanf("%d",&key[i]);
 for(i=0;i<48;i++) subkey[i]=key[i];
 for(i=0;i<48;i++) printf("%d",subkey[i]);
}
