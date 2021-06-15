#define _CRT_SECURE_NO_WARNINGS 1
 //8_1
#include<stdio.h>
int main()
{
	int a, b, c;
	int *p_a = &a;
	int *p_b = &b;
	int *p_c = &c;
	printf("请输入a，b，c三个数：");
	scanf("%d %d %d", &a, &b, &c);
	if (*p_a > *p_b)
	{
		int temp = *p_a;
		*p_a = *p_b;
		*p_b = temp;
	}
	if (*p_a > *p_c)
	{
		int temp = *p_a;
		*p_a = *p_c;
		*p_c = temp;
	}
	if (*p_b > *p_c)
	{
		int temp = *p_b;
		*p_b = *p_c;
		*p_c = temp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}


//7_18
//#include<stdio.h>
//#include<stdbool.h>
//
//bool run(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return true;
//	return false;
//}
//
//int get_day(int year, int mouth, int day)
//{
//	int i = 1;
//	int sum = 0;
//	int arr[] = { 29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (i < mouth)
//	{
//		if (mouth == 2 && run(year))
//			sum += arr[0];
//		else
//			sum = sum + arr[i];
//		i++;
//	}
//	sum += day;
//	return sum;
//
//}
//
//int main()
//{
//	int sum_day = 0;
//	int year, mouth, day;
//	printf("请输入年，月，日：");
//	scanf("%d %d %d", &year, &mouth, &day);
//	sum_day = get_day(year, mouth, day);
//	printf("%d年%d月%d日是%d年的第%d天。\n", year, mouth, day, year, sum_day);
//	return 0;
//}



//7_17
//#include<stdio.h>
//void conver(int num)
//{
//	if (num / 10 != 0)
//		conver(num / 10);
//	printf("%c", num % 10 + '0');
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	printf("输出的字符串的结果为：");
//	conver(num);
//	printf("\n");
//
//	return 0;
//}



//7_16
//#include<stdio.h>
//unsigned int funtion_hex(char hex[])
//{
//	int i = 0;
//	unsigned int rest = 0;
//	while (hex[i] != '\0')
//	{
//		if (hex[i] >= 'A'&&hex[i] <= 'Z')
//			rest = rest * 16 + hex[i] - 'A' + 10;
//		if (hex[i] >= 'a'&&hex[i] < 'z')
//			rest = rest * 16 + hex[i] - 'a' + 10;
//		else
//			rest = rest * 16 + hex[i] - '0';
//		i++;
//	}
//	return rest;
//}
//
//int main()
//{
//	unsigned int rest = 0;
//	char hex[9] = { 0 };      //最大可以存放 0xffff ffff 个字符
//	printf("输入一个十六进制的数：");
//	scanf("%s", hex);
//
//	rest = funtion_hex(hex);
//	printf("%u\n", rest);
//
//	return 0;
//}