#define _CRT_SECURE_NO_WARNINGS 1
//8_15
//#include<stdio.h>
//
//float first_average(float arr[][5])
//{
//	float sum = 0.0;
//	for (int i = 0; i < 4; i++)
//	{
//		sum += *(*(arr + i) + 0);
//	}
//	return sum;
//}
//
//void find_second(float arr[][5])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		int count = 0;
//		float sum = 0.0;
//		for (int j = 0; j < 5; j++)
//		{
//			if (*(*(arr + i) + j) < 60)
//				count++;
//			sum += *(*(arr + i) + j);
//		}
//		if (count>2)
//		{
//			printf("ѧ�ţ�%d\n", i + 1);
//			printf("ȫ���γ̳ɼ�Ϊ:\n");
//			for (int j = 0; j < 5; j++)
//				printf("%.2f ", *(*(arr + i) + j));
//			printf("\nƽ���ɼ�Ϊ��%.2f\n", sum / 5);
//		}
//	}
//}
//
//void look_into(float arr[][5])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		int count = 0;
//		float sum = 0;
//		for (int j = 0; j < 5; j++)
//		{
//			if (*(*(arr + i) + j)>85)
//				count++;
//			sum += *(*(arr + i) + j);
//		}
//		if (count == 5 || (sum / 5.0) > 90)
//			printf("ѧ�����Ϊ��%d\n", i + 1);
//
//	}
//}
//
//
//int main()
//{
//	float arr[4][5];
//	printf("�������ĸ�ѧ�������ųɼ���\n");
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%f %f %f %f %f", *(arr + i) + 0, *(arr + i) + 1, *(arr + i) + 2, *(arr + i) + 3, *(arr + i) + 4);
//	}
//	printf("��һ�ſγ̵�ƽ���ɼ�Ϊ��%.2f\n", first_average(arr) / 4.0);
//	printf("\n�������Ͽγ̲������ѧ����\n");
//	find_second(arr);
//	printf("\nƽ���ɼ���90�����ϻ�ȫ���γ̳ɼ���85�����ϵ�ѧ����\n");
//	look_into(arr);
//
//	return 0;
//}



//8_16
//#include<stdio.h>
//int main()
//{
//	char str[32] = { 0 };
//	char* p = str;
//	int count = 0;
//	int arr[32] = { 0 };
//	printf("������һ���ַ�����");
//	gets(str);
//	while (*p != '\0')
//	{
//		if (*p >= '0'&&*p <= '9')
//		{
//			while (*p >= '0'&&*p <= '9')
//			{
//				*(arr + count) = *(arr + count) * 10 + *p - '0';
//				p++;
//			}
//			count++;
//		}
//		p++;
//	}
//	printf("�ַ����������ĸ���Ϊ��%d\n", count);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//
//	return 0;
//}



//8_17
//#include<stdio.h>
//
//int handle(char str1[], char str2[])
//{
//	char* p1 = str1;
//	char* p2 = str2;
//	int ret;
//	while (*p1 != '\0'&&*p2 != '\0')
//	{
//		if (*p1 != *p2)
//		{
//			ret = *p1 - *p2;
//			break;
//		}
//		p1++;
//		p2++;
//	}
//	if (*p1 == '\0' || *p2 == '\0')
//		ret = *p1 - *p2;
//	return ret;
//}
//
//int main()
//{
//	char str1[32];
//	char str2[32];
//	int ret;
//	printf("�����������ַ�����\n");
//	gets(str1);
//	gets(str2);
//	ret = handle(str1, str2);
//	printf("ret = %d\n", ret);
//}