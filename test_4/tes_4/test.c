#define _CRT_SECURE_NO_WARNINGS 1
//7_3
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//
//bool funtion_prime(int number)
//{
//	int i = 0;
//	for (i = 3; i <= sqrt(number); i+=2)
//	{
//		if (number%i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	bool flat;
//	int number = 0;
//	printf("������һ��������");
//	scanf("%d", &number);
//	flat = funtion_prime(number);
//	if (flat)
//		printf("%d������\n", number);
//	else
//		printf("%d��������\n", number);
//	return 0;
//}




// 7_4 ��ά����   ���л���
//#include<stdio.h>
//
//#define ROW 3
//#define COL 3
//
//void Print_array(int arr[ROW][COL])
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void Exchange(int arr[ROW][COL])
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			int temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	Print_array(arr);
//	printf("\n");
//	Exchange(arr);
//	Print_array(arr);
//
//	return 0;
//}



// 7_5 ��ת�ַ���
//#include<stdio.h>
//#include<string.h>
//#define DP 100
//
//void Exchange_ch(char ch[DP])
//{
//	int strat = 0;
//	int end = strlen(ch) - 1;
//	while (strat < end)
//	{
//		int temp = ch[strat];
//		ch[strat] = ch[end];
//		ch[end] = temp;
//		strat++;
//		end--;
//	}
//}
//
//int main()
//{
//	char ch[DP] = { 0 };
//	printf("�������ַ�����");
//	gets(ch);
//	printf("ԭ�ַ���Ϊ��%s\n", ch);
//	Exchange_ch(ch);
//	printf("��ת����ַ���Ϊ��%s\n", ch);
//	return 0;
//}



// 7_6 ���������ַ���
//#include<stdio.h>
//
//void Contact_ch(char str1[100], char str2[100], char str[200])
//{
//	int i = 0;
//	while (str1[i] != '\0')
//	{
//		str[i] = str1[i];
//		i++;
//	}
//	int j = 0;
//	while (str2[j] != '\0')
//	{
//		str[i] = str2[j];
//		i++;
//		j++;
//	}
//	str[i] = '\0';
//}
//
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	char str[200] = { 0 };
//
//	printf("�������һ���ַ�����");
//	gets(str1);
//	printf("������ڶ����ַ�����");
//	gets(str2);
//
//	Contact_ch(str1, str2, str);
//
//	printf("���Ӻ�����ַ���Ϊ��%s\n", str);
//
//
//	return 0;
//}