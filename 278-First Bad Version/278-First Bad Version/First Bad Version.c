#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool isBadVersion(int version)
{
	int is_bad = 4;
	if (version >= is_bad)
		return true;
	else
		return false;
 }

int firstBadVersion(int n) {
	if (n == 1)return 1;
	int left = 0;
	int right = n;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (isBadVersion(mid))
		{
			if (!isBadVersion(mid - 1))
				return mid;
			else
				right = mid - 1;
		}
		else
		{
			if (isBadVersion(mid + 1))
				return mid + 1;
			else
				left = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int n = 5;
	int version = firstBadVersion(n);
	printf("%d\n", version);
	return 0;
}