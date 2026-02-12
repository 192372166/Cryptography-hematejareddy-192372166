#include <stdio.h>
#include <math.h>

int main() {
   
    int total_chars = 25; 
    
    int key_length = 25; 

    
    double total_possible_keys = pow(total_chars, key_length);
    printf("Total possible keys (approx): 2^%.0f\n", log2(total_possible_keys));

    double unique_keys = total_chars * (total_chars - 1) / 2;
    printf("Effectively unique keys (approx): 2^%.0f\n", log2(unique_keys));

    return 0;
}
