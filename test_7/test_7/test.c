#define _CRT_SECURE_NO_WARNINGS 1
//7_15 
#include<stdio.h>
#include<string.h>

#define N 3
#define NAME_SIZE 20

void input(int id[N], char name[N][NAME_SIZE])
{
	for (int i = 0; i < N; i++)
	{
		printf("������ְ���ţ�");
		scanf("%d", &id[i]);
		getchar();
		printf("������ְ������");
		gets(name[i]);
	}
}

void output(int id[N], char name[N][NAME_SIZE])
{
	for (int i = 0; i < N; i++)
	{
		printf("[%d] : %s\n", id[i], name[i]);
	}
}

void Sort(int id[N], char name[N][NAME_SIZE])
{
	char name_size[NAME_SIZE] = { 0 };
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (id[j]>id[j + 1])
			{
				int temp = id[j];
				strcpy(name_size, name[j]);
				id[j] = id[j + 1];
				strcpy(name[j], name[j + 1]);
				id[j + 1] = temp;
				strcpy(name[j + 1], name_size);
			}
		}
	}
}

void Search(int id[N], char name[N][NAME_SIZE], int key)
{
	int left = 0;
	int right = N - 1;
	int mid;
	while (left <= right)
	{
	    mid = (left + right) / 2;
		if (id[mid] == key)
			break;
		if (id[mid] > key)
			right = mid - 1;
		else
			left = mid + 1;
	}
	if (left <= right)
		printf("ְ����Ϊ %d ��ְ��������Ϊ�� %s\n", key, name[mid]);
	else
		printf("��ְ���Ų�����!\n");
}

int main()
{
	int id[N] = { 0 };
	char name[N][NAME_SIZE] = { 0 };
	int no;
	input(id, name);
	output(id, name);
	printf("\n");
	Sort(id, name);
	output(id, name);
	printf("�˳�������-1\n");
	while (1)
	{
		printf("��������Ҫ������ְ���ţ�");
		scanf("%d", &no);
		if (no == -1)
			break;
		Search(id, name, no);
	}
	return 0;
}
