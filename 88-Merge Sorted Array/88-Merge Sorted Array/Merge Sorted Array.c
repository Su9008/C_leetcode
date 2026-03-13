#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	for (int i = nums1Size - 1; i >= 0; i--)
	{
		if (m > 0 || n > 0)
		{
			if (n == 0)
			{
				nums1[i] = nums1[m - 1];
				m--;
			}
			else if (m == 0)
			{
				nums1[i] = nums2[n - 1];
				n--;
			}
			else if (nums1[m - 1] >= nums2[n - 1])
			{
				nums1[i] = nums1[m - 1];
				m--;
			}
			else
			{
				nums1[i] = nums2[n - 1];
				n--;
			}
		}
	}
}


int main()
{

	int num1[6] = { 1, 2, 3, 0, 0, 0 };
	int m = 3;
	int num2[3] = { 2,5,6 };
	int n = 3;
	// ans: nums1 = [1,2,2,3,5,6]

	//int num1[1] = { 1 };
	//int m = 1;
	//int num2[1] = { 0 };
	//int n = 0;
	//// ans: nums1 = [1]

	//int num1[1] = { 0 };
	//int m = 0;
	//int num2[1] = { 1 };
	//int n = 1;
	//// ans: nums1 = [1]

	int length_num1 = m + n; //m+n
	int length_num2 = n; //n

	merge(num1, length_num1, m, num2, length_num2, n);

	for (int i = 0; i < m + n; i++)
	{
		printf("%d ", num1[i]);
	}
	return 0;
}
