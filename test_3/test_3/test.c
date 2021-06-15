#define _CRT_SECURE_NO_WARNINGS 1
// 7_2
#include<stdio.h>
#include<math.h>

double disc;
double x1, x2;
double p, q;

void funtion_big(int a, int b)
{
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
}

void funtion_small(int a, int b)
{
	x1 = x2 = (-b) / (2 * a);
}

void funtion_equal(int a, int b)
{
	p = -b / (2.0 * a);
	q = sqrt(-disc) / (2 * a);
}

int main()
{
	int a, b, c;
	printf("ÇëÊäÈë a £¬b £¬cµÄÖµ£º");
	scanf("%d %d %d", &a, &b, &c);
	disc = b*b - 4 * a*c;
	if (disc > 0)
	{
		funtion_big(a, b);
		printf("x1=%.2lf,x2=%.2lf\n", x1, x2);
	}
	else if (disc == 0)
	{
		funtion_small(a, b);
		printf("x1=x2=%.2lf\n", x1);
	}
	else
	{
		funtion_equal(a, b);
		printf("x1=%.2lf-%.2lfi,x2=%.2lf+%.2lfi\n", p, q, p, q);
	}
	return 0;
}