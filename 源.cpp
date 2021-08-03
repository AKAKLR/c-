#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	int i ;
	int c;
	int sn=0;
	int tem = 0;
	printf("请输入一个函数\n");
	scanf("%d",&c);
	sn = c;
	for (i = 1; i < 5; i++)
	{
		sn = sn * 10 + c ;
		tem = sn+tem;
	}
	tem = tem + c;
	printf("%d",tem);

	return 0;
}
