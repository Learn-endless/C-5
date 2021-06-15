#define _CRT_SECURE_NO_WARNINGS 1
// 7_13 �õݹ鷽����n�����õ¶���ʽ��ֵ
//#include<stdio.h>
//double Root(int n, int x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	return ((2 * n - 1)*x - Root(n - 1, x) - (n - 1)*Root(n - 2, x)) / n;
//}
//int main()
//{
//	int n, x;
//	printf("������ n �� x ��ֵ��");
//	scanf("%d %d", &n, &x);
//	double comsfeques = Root(n, x);
//	printf("%d�����õ¶���ʽ��ֵΪ��%6.2f\n", n, comsfeques);
//
//	return 0;
//}




// 7_14
#include<stdio.h>

#define M 10       //10��ѧ��
#define N 5        //5�ſγ�

int hang = 0;      //������ſη�����ѧ��
int lie = 0;       //������ſη����Ŀγ�

float score_avg[20] = { 0 };   //����ÿ��ѧ����ƽ������
float course_avg[20] = { 0 };  //����û�ſγ̵�ƽ������

void avg_score(float score[M][N])   //ÿ��ѧ����ƽ������
{
	for (int i = 0; i < M; i++)
	{
		float sum = 0;
		for (int j = 0; j < N; j++)
		{
			sum += score[i][j];
		}
		score_avg[i] = sum / N;
	}
}

void avg_course(float score[M][N])   //ÿ�ſγ̵�ƽ������
{
	for (int i = 0; i < N; i++)
	{
		float sum = 0.0;
		for (int j = 0; j < M; j++)
		{
			sum += score[j][i];
		}
		course_avg[i] = sum / M;
	}
}

float find_score(float score[M][N])  //�ҳ��������ŷ���,��������ĸ�ѧ�������ſγ̡�
{
	float height_score = 0.0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (score[i][j]>height_score)
			{
				height_score = score[i][j];
				hang = i;
				lie = j;

			}
		}
	}
	return height_score;
}

float avg_score_squire(float score[M][N])   //�󷽲��
{
	float stu_sum_avg_squire = 0;
	float stu_sum_avg = 0;
	for (int i = 0; i < M; i++)
	{
		stu_sum_avg_squire += (score_avg[i] * score_avg[i]);
		stu_sum_avg += score_avg[i];
	}
	return stu_sum_avg_squire / M - (stu_sum_avg / M)*(stu_sum_avg / M);
}

void Print(float score[M][N])       //��ӡ����
{
	printf("NO    cour1    cour2    cour3    cour4    cour5    avg\n");
	for (int i = 0; i < M; i++)
	{
		printf("N%-5d", i + 1);
		for (int j = 0; j < N; j++)
		{
			printf("%-9.2f", score[i][j]);  
		}
		printf("%-9.2f", score_avg[i]);     //���ÿ��ѧ����ƽ������
		printf("\n");
	}


	printf("%-6s","avg");
	for (int i = 0; i < N; i++)
	{
		printf("%-9.2f", course_avg[i]);    //���ÿ�ſγ̵�ƽ������
	}
	printf("\n");


	printf("����50������������ߵķ���Ϊ %.2f,��Ӧ��ѧ���Ϳγ�Ϊ %d , %d\n", find_score(score), hang + 1, lie + 1);
	printf("ƽ���ַ���Ϊ��%.2f\n", avg_score_squire(score));
}


int main()
{
	float score[M][N] =      //ֱ�Ӹ�ֵ�γ̷�����������ֶ�����.
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25},
		{26,27,28,29,30},
		{31,32,33,34,35},
		{36,37,38,39,40},
		{41,42,43,44,45},
		{46,47,48,49,50} 
	};

	avg_score(score);   //ÿ��ѧ����ƽ����

	avg_course(score);  //ÿ�ſε�ƽ������

	find_score(score);  //���з����������Ǹ���������������ĸ�ѧ�������ſγ�

	Print(score);       //��ӡ�������

	return 0;
}

