#define _CRT_SECURE_NO_WARNINGS 1

//8_10
//#include<stdio.h>
//#include<stdint.h>
//void handle(int* p, int row, int col)
//{
//	//找到最大的那个数
//	int max = INT32_MIN;
//	int max_tage;
//	for (int i = 0; i < row*col; i++)
//	{
//		if (max < *(p + i))
//		{
//			max = *(p + i);
//			max_tage = i;
//		}
//	}
//	//找出四个角的数
//	int min = INT32_MAX;
//	int min_tage[4];
//	for (int i = 0; i < 4; i++)
//	{
//		min = INT32_MAX;
//		for (int j = 0; j < row*col; j++)
//		{
//			int num = 0;
//			for (num = 0; num < i; num++)
//			{
//				if (j == min_tage[num]) break;  //遍历数组min_tage里是否存在j。
//			}
//			if (num != i)             //若num与i不相等，则说明j已经被记录，需要跳过.
//				continue;
//			if (min>*(p + j))
//			{
//				min = *(p + j);
//				min_tage[i] = j;
//			}
//		}
//	}
//	int center = (row*col) / 2;
//	int left_up = 0;
//	int right_up = col - 1;
//	int left_down = row*(col - 1);
//	int right_down = row*col - 1;
//	int temp;
//	temp = *(p + center); *(p + center) = *(p + max_tage); *(p + max_tage) = temp;
//	temp = *(p + left_up); *(p + left_up) = *(p + min_tage[0]); *(p + min_tage[0]) = temp;
//	temp = *(p + right_up); *(p + right_up) = *(p + min_tage[1]); *(p + min_tage[1]) = temp;
//	temp = *(p + left_down); *(p + left_down) = *(p + min_tage[2]); *(p + min_tage[2]) = temp;
//	temp = *(p + right_down); *(p + right_down) = *(p + min_tage[3]); *(p + min_tage[3]) = temp;
//}
//
//int main()
//{
//	int arr[5][5];
//	int* p = &arr[0][0];
//	printf("请输入一个5 X 5的二维数组：\n");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//	}
//	handle(p, 5, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%4d %4d %4d %4d %4d\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
//	}
//	return 0;
//}



//8_9
//#include<stdio.h>
//
//void funtion(int arr1[3][3], int arr2[3][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			*(*(arr2 + j) + i) = *(*(arr1 + i) + j);
//		}
//	}
//}
//
//int main()
//{
//	int arr1[3][3];
//	int arr2[3][3];
//	printf("请输入arr1的矩形方阵：\n");
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d", &arr1[i][0], &arr1[i][1], &arr1[i][2]);
//	}
//	funtion(arr1, arr2);
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d %d %d\n", arr2[i][0], arr2[i][1], arr2[i][2]);
//	}
//	printf("\n");
//	return 0;
//}


//8_8
//#include<stdio.h>
//#include<stdlib.h>
//int big_letter, small_letter, space, digist, others;
//
//void find(char arr[])
//{
//	char* p = arr;
//	while (*p != '\0')
//	{
//		if (*p >= 'A'&& *p <= 'Z')
//			big_letter++;
//		else if (*p >= 'a'&& *p <= 'z')
//			small_letter++;
//		else if (*p >= '0'&&*p <= '9')
//			digist++;
//		else if (*p == ' ')
//			space++;
//		else
//			others++;
//		p++;
//	}
//}
//
//int main()
//{
//	char arr[1024];
//	printf("请输入一个字符串：");
//	gets(arr);
//	find(arr);
//	printf("大写字母的个数：%d\n", big_letter);
//	printf("小写字符的个数：%d\n", small_letter);
//	printf("数字的个数：%d\n", digist);
//	printf("空格字符的个数：%d\n", space);
//	printf("其他字符的个数：%d\n", others);
//	system("pause");
//	return 0;
//}


//8_7
//#include<stdio.h>
//#include<stdlib.h>
//
//void copy(char str1[], char str2[], int m)
//{
//	char* str1_1 = str1 + (m - 1);
//	char* str2_2 = str2;
//	while (*str1_1 != '\0')
//	{
//		*str2_2 = *str1_1;
//		str1_1++;
//		str2_2++;
//	}
//	*str2_2 = '\0';
//}
//
//int main()
//{
//	int m;
//	char str1[1024];
//	char str2[1024];
//	printf("请输入字符串一：");
//	gets(str1);
//	printf("请输入需要复制的位置m：");
//	scanf("%d", &m);
//	copy(str1, str2, m);
//	printf("%s\n", str2);
//	system("pause");
//	return 0;
//}



//8_6
//#include<stdio.h>
//#include<stdlib.h>
//int len(char arr[])
//{
//	int count = 0;
//	char* p = arr;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[32] = { 0 };
//	char* p = arr;
//	int count = 0;
//	printf("请输入字符串：");
//	scanf("%s", p);
//	count = len(arr);
//	printf("该字符串的长度为：%d", count);
//	system("pause");
//	return 0;
//}