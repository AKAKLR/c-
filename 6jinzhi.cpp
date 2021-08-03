#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int arr[] = {0};
	int i = 0;
	scanf("%d",&a);
	while (a > 0)
	{
		arr[i] = a % 6;
		i++;
			arr[i] = a / 6;
	}
	for (i--;i>1; i--)
		printf("%d", arr[i]);


	return 0;
}