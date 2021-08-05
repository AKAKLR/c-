#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int Temp = 0;
	scanf("%d %d",&a,&b);//22ÊÇ010110 33ÊÇ100001 110111 1+2+4+16+32=55
	c = a ^ b;
	while (c != 0)
	{
		Temp++;
		c =c & (c - 1);//110110
	}

	printf("%d", Temp);

	return 0;
}