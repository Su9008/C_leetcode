#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int climbStairs_recursion(int n) {
	if (n <= 1)
		return 1;
	return climbStairs_recursion(n - 1) + climbStairs_recursion(n - 2);
}

int climbStairs(int n) {
	if (n <= 1)
		return 1;
	int* dp = (int*)malloc(sizeof(int) * (n + 1));
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int result = dp[n];
	free(dp);
	return result;
}

int main()
{
	int n = 3;
	int ways_recursion = climbStairs_recursion(n);
	printf("Ways by recursion: %d\n", ways_recursion);
	int ways = climbStairs(n);
	printf("Ways by recursion: %d\n", ways);
	return 0;
}