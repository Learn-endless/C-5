#define _CRT_SECURE_NO_WARNINGS 1
//8_14
//#include<stdio.h>
//
//void handle(int arr[], int n)
//{
//	int* start = arr;
//	int* end = arr + n - 1;
//	for (; start < end; start++, end--)
//	{
//		int temp = *start;
//		*start = *end;
//		*end = temp;
//	}
//	return;
//}
//
//int main()
//{
//	int n;
//	int arr[100];
//	int* p = arr;
//	printf("������n������������100������");
//	scanf("%d", &n);
//	printf("������һ������:\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", p + i);
//	}
//	handle(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}


//�еľ���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double sum = 0.0;
//	double i = 1.0;
//	double sign = 1;
//	double n = 0;
//	printf("����������Ҫ�ľ���(10^n)��");
//	scanf("%lf", &n);
//	while (fabs(sign/i)>pow(10,n))
//	{
//		sum += sign / i;
//		i += 2;
//		sign = -sign;
//	}
//	printf("�еĽ���ֵΪ:%.15f",sum * 4);
//	return 0;
//}


//8_13
//#include<stdio.h>
//#include<math.h>
//
//double funtion(double(*p)(double),double n,int up,int down)
//{
//	double sum = 0.0;
//	double dx = (up - down) / n;
//	for (double i = down; i <= up; i += dx)
//	{
//		sum += p(i)*dx;
//	}
//	return sum;
//}
//
//int main()
//{
//	double n = 0;
//	int ret = 0;
//	double res = 0.0;
//	int up, down;
//	printf("��ѡ��ȷ�����n:");
//	scanf("%lf", &n);
//	printf("�������ϡ����ޣ�");
//	scanf("%d %d", &up, &down);
//	printf("��������Ҫʹ�õĺ�����1--sin��2--cos��3--exp��:");
//	scanf("%d", &ret);
//	switch (ret)
//	{
//	case 1:
//		res = funtion(sin, n, up, down);
//		break;
//	case 2:
//		res = funtion(cos, n, up, down);
//		break;
//	case 3:
//		res = funtion(exp, n, up, down);
//		break;
//	default:
//		printf("������1--3֮���������\n");
//	}
//	printf("%f\n", res);
//	return 0;
//}



//8_12
//#include<stdio.h>
//#include<string.h>
//
//void handle(char* p[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(*(p + j), *(p + j + 1))>0)
//			{
//				char* temp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	char str[32][32];
//	char* p[32];
//	for (int i = 0; i < 32; i++)
//	{
//		p[i] = str[i];
//	}
//	printf("�������ַ����ĸ���n��");
//	scanf("%d", &n);
//	printf("�������ַ�����\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s",str[i]);
//	}
//	handle(p, n);
//	for(int i = 0; i < n; i++)
//	{
//		printf("%s\n",p[i]); //�������ʽΪ %s ʱ������б�Ϊ��ַ��ʽ��
//	}
//
//	return 0;
//}



//8_11
//#include<stdio.h>
//#include<string.h>
//
//void compare(char arr[32][32], int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(*(arr + j), *(arr + j + 1))>0)
//			{
//				char temp[32];
//				strcpy(temp, *(arr + j));
//				strcpy(*(arr + j), *(arr + j + 1));
//				strcpy(*(arr + j + 1), temp);
//
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	char arr[32][32];
//	int n;
//	printf("��������Ҫ�ַ����ĸ���n:");
//	scanf("%d", &n);
//	printf("�������ַ�����\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//	compare(arr, n);
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

