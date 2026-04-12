#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int hammingDistance(int x, int y) {
    int num = x ^ y;
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((num & 1) == 1) count++;
        num >>= 1;
    }
    return count;
}

int main()
{
    int x = 1, y = 4; // 0001 ^ 0100 = 0101
    printf("CountOne: %d\n", hammingDistance(x, y));

    int z = 3, w = 1; // 0011 ^ 0001 = 0010
    printf("CountOne: %d\n", hammingDistance(z, w));
	return 0;
}