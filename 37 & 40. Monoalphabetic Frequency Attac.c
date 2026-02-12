#include <stdio.h>
#include <string.h>

void decrypt(char *text, int key) {
    for(int i=0;text[i];i++)
        printf("%c",(text[i]-'A'-key+26)%26+'A');
}

int main(){
    char cipher[]="KHOOR";
    for(int k=0;k<26;k++){
        printf("\nKey %d: ",k);
        decrypt(cipher,k);
    }
    return 0;
}
