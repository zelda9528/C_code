#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a;
	while (scanf("%d",&a)!=EOF)
	{
		int A = 2 << (a - 1);

		printf("%d\n", A);
	}
	return 0;
}