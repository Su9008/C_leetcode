#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)return"";
    int minSize = strlen(strs[0]);  
    for (int i = 1; i < strsSize; i++)
    {
        int thisSize = strlen(strs[i]);
        if (thisSize < minSize)
            minSize = thisSize;
    }
    char* prefix = (char*)malloc(sizeof(char) * (minSize + 1));
    int idx = 0;
    for (int i = 0; i < minSize; i++)
    {
        char val = strs[0][i];
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != val)
            {
                prefix[idx] = '\0';
                return prefix;
            }
        }
        prefix[idx] = val;
        idx++;
    }
    prefix[idx] = '\0';
    return prefix;
}

int main()
{
    char* strs[] = { "flower", "flow", "flight" };
    int strsSize = sizeof(strs) / sizeof(strs[0]);
    char* prefix = longestCommonPrefix(strs, strsSize);
    printf("%s", prefix);
    free(prefix);
    return 0;
}