#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int k1 = rand() % 100;
    int k2 = rand() % 100;

    printf("Signature 1 uses k = %d\n", k1);
    printf("Signature 2 uses k = %d\n", k2);
    printf("Different k => Different signatures\n");

    return 0;
}
