#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int search(int* nums, int numsSize, int target) {
	int left = 0;
	int right = numsSize - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2; // (left + right) / 2;

		if (nums[mid] > target)
			right = mid - 1;
		else if (nums[mid] < target)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int nums[] = { -1,0,3,5,9,12 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 9;
	// 4
	int loc = search(nums, numsSize, target);
	printf("%d\n", loc);
	return 0;
}