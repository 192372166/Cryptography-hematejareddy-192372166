#include <stdio.h>
#include <string.h>

#define SIZE 5

char matrix[SIZE][SIZE] = {
    {'M', 'F', 'H', 'I', 'K'},
    {'U', 'N', 'O', 'P', 'Q'},
    {'Z', 'V', 'W', 'X', 'Y'},
    {'E', 'L', 'A', 'R', 'G'},
    {'D', 'S', 'T', 'B', 'C'}
};

void encrypt(char *message) {
    char encrypted[100] = "";
    int i, j, k;
    for (i = 0; message[i] != '\0'; i++) {
        if (message[i] == ' ') continue;
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                if (matrix[j][k] == message[i]) {
                    encrypted[strlen(encrypted)] = matrix[j][(k + 1) % SIZE];
                    break;
                }
            }
        }
    }
    printf("Encrypted Message: %s\n", encrypted);
}

int main() {
    char message[] = "Must see you over Cadogan West. Coming at once.";
    encrypt(message);
    return 0;
}
