#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int mySqrt_v1(int x) {
    if (x <= 1)return x;
    long i = 0;
    for (;; i++)
    {
        if (i * i > x)
            break;

    }
    return (int)(i-1);
}

int mySqrt(int x) {
    int left = 0;
    int right = x;
    int ans = -1;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long tmp = mid * mid;
        if (x == tmp)
            return (int)mid;
        else if (tmp > x)
            right = (int)mid - 1;
        else
        {
            ans = (int)mid;
            left = (int)mid + 1;
        }
    }
    return ans;
}

int main()
{
    //int x = 4;
    int x = 1660267039;
    printf("sqrt func: %d\n", (int)sqrt((double)x));
    int res = mySqrt(x);
    printf("My sqrt: %d\n", res);
	return 0;
}