#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isLeapYear(int i)
{
	if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))//�ж�������������ܱ�4�������Ҳ��ܱ�100���������ܱ�400����
		return 1;//�ж�������
	else
		return 0;//�жϲ�������
}

int main()
{
	int i = 0;
	printf("1999-2020��֮�����꣺");
	for (i = 1999; i <= 2020; i++) //1999-2020֮�������
	{
		if (isLeapYear(i))
			printf("%d ", i);
	}
	printf("\n");
}