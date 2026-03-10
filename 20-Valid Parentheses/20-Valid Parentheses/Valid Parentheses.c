#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool isValid(char* s) {
	char* stack = malloc(sizeof(char) * (strlen(s) + 1));
	int top = -1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			stack[++top] = s[i];
		else
		{
			if (top == -1 ||
				(s[i] == ')' && stack[top] != '(') ||
				(s[i] == '}' && stack[top] != '{') ||
				(s[i] == ']' && stack[top] != '['))
				return false;
			top--;
		}
	}
	return top == -1;
}

int main()
{
	//char* s = "()";
	//// true
	//char* s = "()[]{}";
	//// true
	//char* s = "(]";
	//// false
	//char* s = "([])";
	//// true
	//char* s = "([)]";
	//// false
	char* s = "]";
	// false
	bool check = isValid(s);
	printf("%s\n", check ? "true" : "false");
	return 0;
}
