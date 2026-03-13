#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int removeElement(int* nums, int numsSize, int val) {
	int index = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[index++] = nums[i];
		}
	}
	return index;
}


int main()
{

	int nums[] = {3,2,2,3};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int val = 3;
	// ans:  2, nums = [2,2,_,_]

	//int nums[] = { 0,1,2,2,3,0,4,2 };
	//int numsSize = sizeof(nums) / sizeof(nums[0]);
	//int val = 2;
	//// ans:  5, nums = [0,1,4,0,3,_,_,_]

	int ele = removeElement(nums, numsSize, val);
	printf("ele = %d\n",ele);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}

