#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int reverseBits(int n) {
	int bits = 32;
	int rev = 0;
	while (bits--)
	{
		if ((n & 1) == 1)
		{
			rev = rev << 1;
			rev += 1;
		}
		else
		{
			rev = rev << 1;
		}
		n = n >> 1;
	}
	return rev;
}


int main()
{
	int n = 43261596;
	int res = reverseBits(n);
	// 964176192
	//int n = 2147483644;
	//int res = reverseBits(n);
	//// 1073741822
	printf("%d\n", res);
	return 0;
}
