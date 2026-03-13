#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
	int* sorted = (int*)malloc(sizeof(int) * numsSize);
	int even_idx = 0;
	int odd_idx = numsSize - 1;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] % 2 == 0)
		{
			sorted[even_idx] = nums[i];
			even_idx++;
		}
		else
		{
			sorted[odd_idx] = nums[i];
			odd_idx--;
		}
	}
	*returnSize = numsSize;
	return sorted;
}

int main()
{
	int nums[] = { 3,1,2,4 };
	// [2 4 3 1] [4 2 3 1] [2 4 1 3] [4 2 1 3]
	//int nums[] = { 0 };
	//// [0]
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int* returnSize = (int*)calloc(1, sizeof(int));
	int* sorted = sortArrayByParity(nums, numsSize, returnSize);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", sorted[i]);
	}
	free(returnSize);
	free(sorted);
	returnSize = NULL;
	sorted = NULL;

	printf("\n");
	return 0;
}