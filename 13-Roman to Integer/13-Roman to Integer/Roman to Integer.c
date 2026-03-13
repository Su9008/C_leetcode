#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int romanToInt(char* s) {
	int result = 0;
	int pre = 0;
	int values[] = { 1,5,10,50,100,500,1000 };
	char roman[] = { 'I','V','X','L','C','D', 'M' };

	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		for (int j = 0; j < 7; j++)
		{
			if (s[i] == roman[j])
			{
				if (values[j] < pre)
				{
					result -= pre;
					pre -= values[j];
					result += pre;
				}
				else
				{
					pre = values[j];
					result += pre;
				}
			}
		}
	}
	return result;
}

int main()
{
	//char s[3] = "III";
	//// 3

	//char s[5] = "LVIII";
	//// 58

	char s[7] = "MCMXCIV";
	// 1994

	int res = romanToInt(s);
	printf("%d\n", res);
	return 0;
}