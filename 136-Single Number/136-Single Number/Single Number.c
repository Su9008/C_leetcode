#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int singleNumber(int* nums, int numsSize) {
    if (numsSize == 1)return nums[0];
    for (int index = 0; index < numsSize - 1; index++)
    {
        nums[index + 1] ^= nums[index];
    }
    return nums[numsSize - 1];
}

int main()
{
    //int nums[] = { 2,2,1 };
    // 1
    int nums[] = { 4,1,2,1,2 };
    // 4
    //int nums[] = { 1 };
    // 1
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result = singleNumber(nums, numsSize);
    printf("%d\n", result);
    return 0;
}
