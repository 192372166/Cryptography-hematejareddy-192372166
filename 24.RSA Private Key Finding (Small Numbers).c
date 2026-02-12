#include<stdio.h>
int main(){
 int e=31,phi=3480,d=1;
 while((d*e)%phi!=1) d++;
 printf("Private key d=%d",d);
}
