#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, s, p;
	printf("������߳�:\n");
	scanf("%f %f %f", &a, &b, &c);
	printf("a=%f b=%f c=%f\n", a, b, c);
	if (a + b > c&&a + c > b&&b + c > a)
	{
		p = (a + b + c) / 2;
		printf("�ܹ��������Σ������:%f\n", sqrt(p*(p - a)*(p - b)*(p - c)));
	}
	else
	{
		printf("���ܹ���������\n");
	}
	return 0;
}