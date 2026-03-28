#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int counting(int n)
{
    if (n == 0)return 0;
    int count = 0;
    while (n)
    {
        if ((n & 1) == 1)count++;
        n = n >> 1;
    }
    return count;
}
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* result = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = n; i >= 0; i--)
    {
        result[i] = counting(i);
    }
    return result;

}
int main()
{
	//int n = 2; // 0 1 1
    int n = 5; // 0 1 1 2 1 2
    int* returnSize = (int*)calloc(sizeof(int), 1);
    int* result = countBits(n, returnSize);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", result[i]);
    }
    free(result);
    result = NULL;
    printf("\n");
    return 0;
}