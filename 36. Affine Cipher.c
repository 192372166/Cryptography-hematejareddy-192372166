#include <stdio.h>

int gcd(int a, int b){
    while(b){ int t=b; b=a%b; a=t; }
    return a;
}

int main(){
    int a=5,b=8;
    if(gcd(a,26)!=1){
        printf("Invalid a value.\n");
        return 0;
    }
    for(int p=0;p<26;p++)
        printf("%c ", (a*p+b)%26 + 'A');
    return 0;
}
