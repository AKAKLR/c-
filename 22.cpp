#include<stdio.h>

int main()
{
	int i;
	int o;
	int a, b, c;//aΪ��λ���֣�bΪʮλ���֣�cΪ��λ���� 
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;

		if (i == (a * a * a + b * b * b + c * c * c))
		{
			printf("%d\n", i);
		}

	}
	return 0;

	