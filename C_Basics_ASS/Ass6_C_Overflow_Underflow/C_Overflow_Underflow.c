#include <stdio.h>

int main() {
    unsigned int max_uint = 4294967295;
    printf("Max unsigned int: %u\n", max_uint);
    max_uint = max_uint + 1;  // Overflow
    printf("After overflow: %u\n", max_uint);
    
    int min_int = -2147483648;
    printf("Min signed int: %d\n", min_int);
    min_int = min_int - 1;  // Underflow
    printf("After underflow: %d\n", min_int);
    return 0;
}
