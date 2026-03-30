#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int missingNumber(int* nums, int numsSize) {
    int tmp = 0;
    for (int j = 0; j < numsSize; j++)
    {
        tmp ^= nums[j];
    }
    for (int i = 0; i <= numsSize; i++)
    {
        tmp ^= i;
    }
    return tmp;
}

int main()
{
    //int nums[] = { 3,0,1 }; // 2
    //int nums[] = { 0,1 }; // 2
    int nums[] = { 9,6,4,2,3,5,7,0,1 }; // 8
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int missed = missingNumber(nums, numsSize);
    printf("%d\n", missed);
    return 0;
}