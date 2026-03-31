#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int xorOperation(int n, int start) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum ^= (start + 2 * i);
    }
    return sum;
}

int main()
{
    int n = 5, start = 0; // 8
    //int n = 4, start = 3; // 8
    int result = xorOperation(n, start);
    printf("%d\n", result);
    return 0;
}