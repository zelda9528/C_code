#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



MAX(int x, int y)
{
	printf("����������Ҫ�Ƚϵ���\n");

	scanf("%d%d", &x, &y);

	if (x >= y)

	{

		int z = x;

		printf("�ϴ����Ϊ%d\n", z);

		return z;

	}

	else

	{

		int z = y;

		printf("�ϴ����Ϊ%d\n", z);

		return z;

	}

}

int main()

{
	int x = 0;
	int y = 0;

	MAX(x, y);

	return 0;

}