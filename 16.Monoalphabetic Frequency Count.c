#include<stdio.h>
#include<string.h>
int main(){
 char c[100]; int f[26]={0},i;
 scanf("%s",c);
 for(i=0;c[i];i++) f[c[i]-65]++;
 for(i=0;i<26;i++)
  printf("%c=%d\n",i+65,f[i]);
}
