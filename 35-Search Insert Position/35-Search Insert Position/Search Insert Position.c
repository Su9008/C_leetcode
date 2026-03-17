#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    if (target > nums[numsSize - 1]) 
        return numsSize;
    int left = 0;
    int right = numsSize - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= target)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

int main()
{
    int nums[] = { 1,3,5,6 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    //int target = 5; // 2
    //int target = 2; // 1
    int target = 7; // 4
    int insert_idx = searchInsert(nums, numsSize, target);
    printf("%d\n", insert_idx);
    return 0;
}