#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int maxProfit(int* prices, int pricesSize) {
	int profit = 0;
	int buy = prices[0];

	for (int i = 1; i < pricesSize; i++)
	{
		if (prices[i] < buy)
			buy = prices[i];
		else if ((prices[i] - buy) > profit)
			profit = prices[i] - buy;
	}
	return profit;
}

int main()
{
	//int prices[6] = { 7,1,5,3,6,4 };
	//int pricesSize = sizeof(prices) / sizeof(prices[0]);
	//// 5

	int prices[5] = { 7,6,4,3,1 };
	int pricesSize = sizeof(prices) / sizeof(prices[0]);
	//0

	//int prices[] = { 0,1 };
	//int pricesSize = sizeof(prices) / sizeof(prices[0]);

	int max = maxProfit(prices, pricesSize);
	printf("%d\n", max);

	return 0;
}