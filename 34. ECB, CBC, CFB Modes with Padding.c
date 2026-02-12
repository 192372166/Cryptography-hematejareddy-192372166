#include <stdio.h>
#include <string.h>

void pad(char *msg, int blockSize) {
    int len = strlen(msg);
    int padLen = blockSize - (len % blockSize);
    msg[len] = 0x80;
    for(int i=1;i<padLen;i++)
        msg[len+i] = 0x00;
}

int main() {
    char msg[64] = "HELLO";
    pad(msg, 8);
    printf("Message padded.\n");
    return 0;
}
