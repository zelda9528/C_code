#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
int main()
{
	int i, j, a[N], temp;
	printf("������ 10 �����֣�\n");
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < N - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < N; j++)
			if (a[min] > a[j]) min = j;
		if (min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
	printf("��������:\n");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}