#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// ��ʽ����a * b = ��С������ * ���Լ��
int min_res2(int a, int b)
{
	int max_res3(int a, int b);
	return (a*b) / max_res3(a, b);
}

//ŷ�����շת�����--�ݹ�ʵ�֣������Լ����
int max_res4(int a, int b)
{
	if (b == 0)
		return a;
	else
		return max_res4(b, a%b);
}

//ŷ�����շת������������Լ����
int max_res3(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else if (a == b)
		return a;
	int max = a%b;
	while (max)
	{
		a = b;
		b = max;
		max = a%b;
	}
	return b;
}

//������������Լ����
int max_res2(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else if (a == b)
		return a;
	int max = 0;
	while (a != b)
	{
		max = a > b ? (a -= b) : (b -= a);
	}
	return max;
}

//��ٷ������Լ����
int max_res1(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else if (a == b)
		return a;
	int max = a > b ? b : a;
	while (max > 1)
	{
		if (a%max == 0 && b%max == 0)
			break;
		max--;
	}
	return max;
}

//��ٷ�����С��������
int min_res1(int a, int b)
{
	if (a*b == 0)
		return 0;
	int min = a > b ? a : b;
	while (1)
	{
		if (min%a == 0 && min%b == 0)
			break;
		min++;
	}
	return min;
}

int main()
{
	int a, b;
	printf("������ a �� b ��ֵ��");
	scanf("%d %d", &a, &b);

	printf("��С������Ϊ��%d\n", min_res1(a, b));
	printf("���Լ��Ϊ��%d\n\n", max_res1(a, b));

	printf("��С������Ϊ��%d\n", min_res1(a, b));
	printf("���Լ��Ϊ��%d\n\n", max_res2(a, b));

	printf("��С������Ϊ��%d\n", min_res1(a, b));
	printf("���Լ��Ϊ��%d\n\n", max_res3(a, b));

	printf("��С������Ϊ��%d\n", min_res2(a, b));
	printf("���Լ��Ϊ��%d\n\n", max_res4(a, b));
	return 0;
}