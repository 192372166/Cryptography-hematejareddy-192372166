#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char text[] = "HELLO";
    int len = 5;

    srand(time(NULL));

    printf("Ciphertext: ");
    for(int i=0;i<len;i++) {
        int key = rand()%26;
        char c = ((text[i]-'A') + key)%26 + 'A';
        printf("%c", c);
    }
    return 0;
}
