#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int time = 0;
    scanf("%d", &time);
    a = time / 3600;
        b = (time-3600*a) / 60;
    c = time - 3600 * a - 60 * b;
        printf("%d %d %d", a, b, c);
    return 0;
}