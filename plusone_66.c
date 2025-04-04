
/*
  
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 

Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.

*/




#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate memory for the result
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    if (!result) return NULL; // Check for allocation failure
    
    int carry = 1; // Start with carry as we are adding 1
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        result[i + 1] = sum % 10; // Store the last digit
        carry = sum / 10;         // Update carry
    }
    
    // If there's a carry left, we need an extra digit
    if (carry) {
        result[0] = 1;
        *returnSize = digitsSize + 1;
    } else {
        // Shift result left by 1 (ignoring the first allocated element)
        for (int i = 0; i < digitsSize; i++) {
            result[i] = result[i + 1];
        }
        *returnSize = digitsSize;
    }
    
    return result;
}

int main() {
    int digits[] = {9, 9, 9};
    int size = sizeof(digits) / sizeof(digits[0]);
    int returnSize;
    
    int* result = plusOne(digits, size, &returnSize);
    
    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1) printf(", ");
    }
    printf("]\n");
    
    free(result); // Free allocated memory
    return 0;
}


