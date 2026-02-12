#include<stdio.h>
#include<string.h>
int main(){
 char p[20];
 scanf("%s",p);
 strcat(p,"1");
 while(strlen(p)%8!=0) strcat(p,"0");
 printf("%s",p);
}
