#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
	int val = nums[0];
	int ele = 1;
	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[ele] = nums[i];
			val = nums[i];
			ele++;
		}
	}
	return ele;
}

int main()
{
	//int nums[3] = { 1,1,2 };
	//int numSize = sizeof(nums) / sizeof(nums[0]);
	//// 2, nums = [1,2,_]

	int nums[10] = { 0,0,1,1,1,2,2,3,3,4 };
	int numSize = sizeof(nums) / sizeof(nums[0]);
	// 5, nums = [0,1,2,3,4,_,_,_,_,_]

	int ele = removeDuplicates(nums, numSize);
	printf("ele = %d\n", ele);
	for (int i = 0; i < numSize; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}
