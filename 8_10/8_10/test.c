#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("������һ����\n");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("aΪż��\n");
	}
	else
	{
		printf("aΪ����\n");
	}
	return 0;
}