#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 公式法：a * b = 最小公倍数 * 最大公约数
int min_res2(int a, int b)
{
	int max_res3(int a, int b);
	return (a*b) / max_res3(a, b);
}

//欧几里得辗转相除法--递归实现（求最大公约数）
int max_res4(int a, int b)
{
	if (b == 0)
		return a;
	else
		return max_res4(b, a%b);
}

//欧几里得辗转相除法（求最大公约数）
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

//相减法（求最大公约数）
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

//穷举法（最大公约数）
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

//穷举法（最小公倍数）
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
	printf("请输入 a 和 b 的值：");
	scanf("%d %d", &a, &b);

	printf("最小公倍数为：%d\n", min_res1(a, b));
	printf("最大公约数为：%d\n\n", max_res1(a, b));

	printf("最小公倍数为：%d\n", min_res1(a, b));
	printf("最大公约数为：%d\n\n", max_res2(a, b));

	printf("最小公倍数为：%d\n", min_res1(a, b));
	printf("最大公约数为：%d\n\n", max_res3(a, b));

	printf("最小公倍数为：%d\n", min_res2(a, b));
	printf("最大公约数为：%d\n\n", max_res4(a, b));
	return 0;
}