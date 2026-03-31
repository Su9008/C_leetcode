#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char findTheDifference(char* s, char* t) {
    int s_length = strlen(s);
    int t_length = strlen(t);
    char s_xor = 0;
    char t_xor = 0;
    for (int i = 0; i < s_length; i++)
    {
        s_xor ^= s[i];
    }
    for (int j = 0; j < t_length; j++)
    {
        t_xor ^= t[j];
    }
    return s_xor ^ t_xor;
}

int main()
{
    char* s = "abcd", *t = "abcde"; // e
    //char* s = "", *t = "y"; // y
    char diff = findTheDifference(s, t);
    printf("%c", diff);

    return 0;
}