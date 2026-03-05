#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int hammingWeight(int n) {
    int count = 0;
    while (n != 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int num1 = 11; // 1011
    int result1 = hammingWeight(num1);
    printf("Number of 1 Bits in num1: %d\n", result1); // 3

    int num2 = 128;  // 10000000
    int result2 = hammingWeight(num2);
    printf("Number of 1 Bits in num2: %d\n", result2); // 1

    int num3 = 2147483645; // 1111111111111111111111111111101
    int result3 = hammingWeight(num3); 
    printf("Number of 1 Bits in num3: %d\n", result3); // 30
    return 0;
}