#define _CRT_SECURE_NO_WARNINGS 1
//8_5
//#include<stdio.h>
//int main()
//{
//	int n;
//	int people[100];
//	int* p = people;
//	printf("������n�Ĵ�С:");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	int remain = n;
//	int num = 0;
//	while (remain>1)
//	{
//		p = people;
//		while (p != people + n)
//		{
//			if (*p != 0)
//			{
//				num++;
//				if (num == 3)
//				{
//					*p = 0;
//					remain--;
//					num = 0;
//				}
//			}
//			p++;
//		}
//	}
//	p = people;
//	for (int i = 0; i < n; i++)
//	{
//		if (*(p + i) != 0)
//		{
//			printf("��������Ϊ��%d\n", *(p + i));
//			break;
//		}
//	}
//	return 0;
//}



//8_4
//#include<stdio.h>
//
//void move(int arr[], int n, int m)
//{
//	for (int i = 0; i < m; i++)     //��Ҫ�ƶ�ĩβm����������Ҫm��.
//	{
//		int temp = *(arr + n - (m - i)); //��ĩβ��m������ʱ�����temp��.
//		for (int j = n - (m - i); j>i; j--)
//		{
//			*(arr + j) = *(arr + (j - 1));    //�ѵ�m����ǰ��������������ƶ�һλ
//		}
//		*(arr + i) = temp;                //��temp��ŵ����ŵ�Ԫ���±�Ϊi�ĵط����ѵ�����m�����Ƶ�������i����
//	}
//}
//
//int main()
//{
//	int n, m;
//	int arr[32];
//	int* p = arr;
//	printf("������n�Ĵ�С��");
//	scanf("%d", &n);
//	printf("��������Ҫ�ƶ���ĩβ���ֵĸ���m��");
//	scanf("%d", &m);
//	printf("����������n�����ݣ�");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", p + i);
//	}
//	move(arr, n, m);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}

//8_3
//#include<stdio.h>
//
//void input(int arr[], int len)
//{
//	printf("������%d��Ԫ��,�ÿո������", len);
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//
//void handle(int arr[], int len)
//{
//	int max = *arr;
//	int max_tage = 0;
//	int min = *arr;
//	int min_tage = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (max < *(arr + i)) {
//			max = *(arr + i);
//			max_tage = i;
//		}
//		if (min > *(arr + i)) {
//			min = *(arr + i);
//			min_tage = i;
//		}
//	}
//	if (*arr == max){
//		int min_temp = *arr; *arr = *(arr + min_tage); *(arr + min_tage) = min_temp;
//		max_tage = min_tage;
//	}
//	else{
//		int min_temp = *arr; *arr = *(arr + min_tage); *(arr + min_tage) = min_temp;
//	}
//	int max_temp = *(arr + len - 1); *(arr + len - 1) = *(arr + max_tage); *(arr + max_tage) = max_temp;
//}
//
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//	handle(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//8_2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char str1[32], str2[32], str3[32];
//	char* a = str1;
//	char* b = str2;
//	char* c = str3;
//	printf("�����������ַ������ÿո����:");
//	scanf("%s %s %s", str1, str2, str3);
//	if (strcmp(a,b) > 0)
//	{
//		char* temp = a;
//		a = b;
//		b = temp;
//	}
//	if (strcmp(a, c) > 0)
//	{
//		char *temp = a;
//		a = c;
//		c = temp;
//	}
//	if (strcmp(b, c) > 0)
//	{
//		char *temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("%s %s %s\n",a,b,c);
//	return 0;
//}