#define _CRT_SECURE_NO_WARNINGS 1
// 7_7 复制一个字符串中的元音字母.
//#include<stdio.h>
//
//void Copy_ch(char str1[100], char str[100])
//{
//	int i = 0;
//	int j = 0;
//	while (str1[i] != '\0')
//	{
//		if (str1[i] == 'a' || str1[i] == 'A' ||
//			str1[i] == 'e' || str1[i] == 'E' ||
//			str1[i] == 'i' || str1[i] == 'I' ||
//			str1[i] == 'o' || str1[i] == 'O' ||
//			str1[i] == 'u' || str1[i] == 'U')
//		{
//			str[j] = str1[i];
//			j++;
//		}
//		i++;
//	}
//	str[j] = '\0';
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	char str1[100] = { 0 };
//	printf("请输入原始字符串：");
//	gets(str1);
//	Copy_ch(str1, str);
//	printf("目标字符串为:%s\n", str);
//	return 0;
//}




// 7_8 输入4位数字，按要求输出
//#include<stdio.h>
//void Out_digits(char digits[20])
//{
//	int i = 0;
//	while (digits[i] != '\0')
//	{
//		printf("%c", digits[i]);
//		if (digits[i + 1] != '\0')
//			printf(" ");
//		i++;
//	}
//}
//
//int main()
//{
//	char digits[20] = { 0 };
//	printf("请输入一个4位数字字符串：");
//	scanf("%s", digits);
//
//	Out_digits(digits);
//	printf("\n");
//
//	return 0;
//}



//7_9
//#include<stdio.h>
//int letter, space, digits, others;
//
//void Count_string(char str[100])
//{
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		if (str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'A'&&str[i] <= 'Z')
//			letter++;
//		else if (str[i] == ' ')
//			space++;
//		else if (str[i] >= '0'&&str[i] <= '9')
//			digits++;
//		else
//			others++;
//		i++;
//	}
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	printf("请输入原始字符串：");
//	gets(str);
//	Count_string(str);
//	printf("字母的个数为：%d\n", letter);
//	printf("数字的个数为：%d\n", digits);
//	printf("空格的个数为：%d\n", space);
//	printf("其他字符的个数为：%d\n", others);
//
//	return 0;
//}


// 7_10
//#include<stdio.h>
//#include<string.h>
//
//void Count_wold(char str[256], char mod[256])
//{
//	int i = 0, j = 0;
//	unsigned int len = 0;
//	while (str[i] != '\0')
//	{
//		j = i;
//		while (str[j] != '\0'&&str[j] != ' ')
//		{
//			j++;
//		}
//		len = j - i;
//		if (len > strlen(mod))
//		{
//			strncpy(mod, str + i, len);
//		}
//		j++;
//		i = j;
//	}
//}
//
//int main()
//{
//	char str[256] = { "After adding the dependency correctly, check whether the local" };
//	char mod[256] = { 0 };
//	Count_wold(str, mod);
//	printf("最长的单词为：%s\n", mod);
//	return 0;
//}



//7_11 起泡法（冒泡排序）
//#include<stdio.h>
//#include<string.h>
//
//void sort(char str[])
//{
//	int j = 0, i = 0;
//	int n = strlen(str);
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (str[j]<str[j + 1])
//			{
//				int temp = str[j + 1];
//				str[j + 1] = str[j];
//				str[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char str[11] = { 0 };
//	printf("请输入10个字符：");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//	sort(str);
//	printf("排序后的字符为：%s\n", str);
//	return 0;
//}



// 7_12 牛顿迭代法求 a*x^3 + b*x^2 + c*x + d = 0 的根2
//#include<stdio.h>
//#include<math.h>
//
//double Root_funtion(int a, int b, int c, int d, double x)   //double 类型的返回值
//{
//	double x0, f, f1;
//	do                                                      //必须要先运行一套，使x与x0不同
//	{
//		x0 = x;
//		f = a*pow(x0, 3) + b*pow(x0, 2) + c*x0 + d;
//		f1 = 3 * a*pow(x0, 2) + 2 * b*x0 + c;
//		x = x0 - f / f1;
//	} while (fabs(x - x0) >= 1e-3);
//	return x;
//}
//
//int main()
//{
//	int a, b, c, d;
//	double x;
//	printf("请输入 a ,b ,c ,d ,x的值：");
//	scanf("%d %d %d %d %lf", &a, &b, &c, &d, &x);
//	double res = Root_funtion(a, b, c, d, x);
//	printf("该方程的根为：%lf\n", res);
//	return 0;
//}