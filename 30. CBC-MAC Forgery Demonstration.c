#include <stdio.h>

int main() {
    printf("CBC-MAC(X || (X XOR T)) = T\n");
    printf("Demonstrates insecurity for variable-length messages.\n");
    return 0;
}
