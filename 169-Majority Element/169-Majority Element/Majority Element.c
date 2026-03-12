#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int majorityElement(int* nums, int numsSize) {
	int count = 0;
	int candidate = 0;

	for (int i = 0; i < numsSize; i++)
	{
		if (count == 0)
			candidate = nums[i];
		count += (candidate == nums[i]) ? 1 : -1;
	}
	return candidate;
}

int main()
{
	//int nums[] = { 3, 2, 3 };
	//// 3
	int nums[] = { 2,2,1,1,1,2,2 };
	// 2
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int majority = majorityElement(nums, numsSize);
	printf("Majority Element: %d", majority);

}