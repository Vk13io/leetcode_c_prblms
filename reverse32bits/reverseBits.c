#include <stdio.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;

    for (int i = 0; i < 32; i++) {
        result <<= 1;        // Shift result left by 1
        result |= (n & 1);   // Add the last bit of n to result
        n >>= 1;             // Shift n right by 1
    }

    return result;
}




int main() {
    uint32_t n = 43261596;
    uint32_t reversed = reverseBits(n);
    printf("Reversed: %u\n", reversed);  
    return 0;
}
