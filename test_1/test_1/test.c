#define _CRT_SECURE_NO_WARNINGS 1
//6_8 �Ұ��㣨һ���������һ������С������
//#include<stdio.h>
//#define M 3
//#define N 4
//int main()
//{
//	int i, j;
//	int MAX, POS;
//	int flag = 0;
//	int arr[M][N];
//	printf("������%d��%d�еĶ�ά���飺\n", M, N);
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < M; i++)
//	{
//		MAX = arr[i][0];
//		for (j = 1; j < N; j++)
//		{
//			if (arr[i][j]>MAX)
//			{
//				MAX = arr[i][j];
//				POS = j;
//			}
//		}
//		for (j = 0; j <	M; j++)
//		{
//			if (arr[j][POS] < MAX)
//			{
//				break;
//			}
//		}
//		if (j == M)
//		{
//			printf("����Ϊ��%d��%d�е�%d\n", i, POS, arr[i][POS]);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�ö�ά����û�а���\n");
//	}
//
//	return 0;
//}



// 6_9 ���ֲ��ҵ�Ӧ�ã���С���������飩(����ҿ�)
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int num;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	printf("��������Ҫ���ҵ���:");
//	scanf("%d", &num);
//	while (left<right)
//	{
////		int mid = (left + right) / 2;
//		int mid = left + ((right - left) >> 1);
//		if (arr[mid] == num)
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > num)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			right = mid;
//		}
//	}
//	if (left == right)
//	{
//		printf("���޴���\n");
//	}
//	return 0;
//}



// 6_9 ���ֲ��ҵ�Ӧ�ã���С���������飩(����ұ�)
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int num;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	
//	printf("������1-15����Ҫ���ҵ����֣�");
//	scanf("%d", &num);
//	while (left <= right)                       //ע�ⷶΧ
//	{
//		int mid = left + ((right - left) >> 1);
//		if (arr[mid] == num)
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > num)
//		{
//			left = mid + 1;               ////ע���Ƿ��һ������˳���� �Ӵ�С ���Ǵ�С����
//		}
//		else
//		{
//			right = mid - 1;              //ע���Ƿ��һ������˳���� �Ӵ�С ���Ǵ�С����
//		}
//	}
//	if (left > right)                   //ע�ⷶΧ
//		printf("���޴���������\n");
//
//	return 0;
//}



// 6_10
//#include<stdio.h>
//int main()
//{
//	char arr[3][80] = { 0 };
//	int i = 0;
//	int j = 0;
//	int big_C = 0, small_C = 0, digit = 0, space = 0, other = 0;
//	printf("�������ı�:\n");
//	for (i = 0; i < 3; i++)
//		gets(arr[i]);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; arr[i][j] != '\0'; j++)
//		{
//			if (arr[i][j] >= 'A'&& arr[i][j] <= 'Z')
//				big_C++;
//			else if (arr[i][j] >= 'a'&& arr[i][j] <= 'z')
//				small_C++;
//			else if (arr[i][j] >= '1'&& arr[i][j] <= '9')
//				digit++;
//			else if (arr[i][j] == ' ')
//				space++;
//			else
//				other++;
//		}
//	}
//
//	printf("��д��ĸ�ĸ���Ϊ��%d\n", big_C);
//	printf("Сд��ĸ�ĸ���Ϊ��%d\n", small_C);
//	printf("���ֵĸ���Ϊ��    %d\n", digit);
//	printf("�ո�ĸ���Ϊ��    %d\n", space);
//	printf("�����ַ��ĸ���Ϊ��%d\n", other);
//	return 0;
//}



// 6_11
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//			printf("  ");
//
//		for (j = 0; j < 5; j++)
//			printf("* ");
//		printf("\n");
//	}
//	return 0;
//}



//6_12
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char sz[100] = { 0 };
//	printf("���������룺");
//	gets(sz);
//	for (i = 0; sz[i] != '\0'; i++)
//	{
//		if (sz[i] >= 'A'&& sz[i] <= 'Z')
//		{
//			sz[i] = 'A' + (26 - (sz[i] - 'A') - 1);
//		}
//        if (sz[i] >= 'a'&& sz[i] <= 'z')
//		{
//			sz[i] = 'a' + (26 - (sz[i] - 'a') - 1);
//		}
//	}
//	printf("���ԭ��Ϊ: %s\n", sz);
//
//	return 0;
//}


// 6_13 ƴ���ַ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char arr1[100] = { 0 };
//	char arr2[50] = { 0 };
//	printf("������Ŀ���ַ�����");
//	gets(arr1);
//	printf("����������ַ�����");
//	gets(arr2);
//	while (arr1[i] != '\0')
//	{
//		i++;
//	}
//	while (arr2[j] != '\0')
//	{
//		arr1[i] = arr2[j];
//		i++;
//		j++;
//	}
//	arr1[i] = '\0';                             //ע��'\0'��Ҫ���ϣ��ַ�����'\0'������
//	printf("ƴ�Ӻ���ַ���Ϊ��%s\n", arr1);
//	return 0;
//}


//6_14
//#include<stdio.h>
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	int i = 0;
//	int ret = 0;
//	printf("������s1��");
//	gets(s1);
//	printf("������s2��");
//	gets(s2);
//	do{
//		ret = s1[i] - s2[i];
//		if (ret != 0)
//			break;
//		i++;
//	} while (s1[i] != '\0'&&s2[i] != '\0');
//	printf("%d\n", ret);
//	return 0;
//}


//6_15
//#include<stdio.h>
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	int i = 0;
//	printf("������s2���ַ�����");
//	gets(s2);
//	while ('\0' != s2[i])
//	{
//		s1[i] = s2[i];
//		i++;
//	}
//	s1[i] = '\0';
//	printf("%s\n", s1);
//	return 0;
//}