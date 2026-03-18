#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int fib_recursion(int n) {
	if (n <= 1)
		return n;
	return fib_recursion(n - 1) + fib_recursion(n - 2);
}

int fib(int n) {
	if (n <= 1)
		return n;
	int* dp = (int*)malloc(sizeof(int) * (n+1));
	dp[0] = 0;
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
	//int n = 2; // 1
	//int n = 3; // 2
	int n = 4; // 3 
	//int n = 10; // 55 
	int res_recursion = fib_recursion(n);
	printf("Fib recursion: %d\n", res_recursion);
	int res = fib(n);
	printf("Fib: %d\n", res);
	return n;
}