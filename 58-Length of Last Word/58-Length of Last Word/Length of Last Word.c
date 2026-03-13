#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int lengthOfLastWord(char* s) {
	int count = 0;

	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] != ' ')
		{
			count++;
		}
		else if (s[i] == ' ' && count != 0)
		{
			break;
		}
	}
	return count;
}

int main()
{
	//char s[] = "Hello World";
	//// 5
	//char s[] = "   fly me   to   the moon  ";
	//// 4
	char s[] = "luffy is still joyboy";
	// 6
	//char s[] = "a";
	//// 1
	int length = lengthOfLastWord(s);
	printf("%d\n", length);
	return 0;
}