#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];  // XOR all elements
    }
    return result; // Unique number remains
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int uniqueNumber = singleNumber(nums, size);
    printf("Single number: %d\n", uniqueNumber);
    
    return 0;
}
