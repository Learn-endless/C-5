#define _CRT_SECURE_NO_WARNINGS 1
// 7_13 用递归方法求n阶勒让德多项式的值
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
//	printf("请输入 n 和 x 的值：");
//	scanf("%d %d", &n, &x);
//	double comsfeques = Root(n, x);
//	printf("%d阶勒让德多项式的值为：%6.2f\n", n, comsfeques);
//
//	return 0;
//}




// 7_14
#include<stdio.h>

#define M 10       //10个学生
#define N 5        //5门课程

int hang = 0;      //最大那门课分数的学生
int lie = 0;       //最大那门课分数的课程

float score_avg[20] = { 0 };   //保存每个学生的平均分数
float course_avg[20] = { 0 };  //保存没门课程的平均分数

void avg_score(float score[M][N])   //每个学生的平均分数
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

void avg_course(float score[M][N])   //每门课程的平均分数
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

float find_score(float score[M][N])  //找出最大的那门分数,并输出是哪个学生的哪门课程。
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

float avg_score_squire(float score[M][N])   //求方差函数
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

void Print(float score[M][N])       //打印函数
{
	printf("NO    cour1    cour2    cour3    cour4    cour5    avg\n");
	for (int i = 0; i < M; i++)
	{
		printf("N%-5d", i + 1);
		for (int j = 0; j < N; j++)
		{
			printf("%-9.2f", score[i][j]);  
		}
		printf("%-9.2f", score_avg[i]);     //输出每个学生的平均分数
		printf("\n");
	}


	printf("%-6s","avg");
	for (int i = 0; i < N; i++)
	{
		printf("%-9.2f", course_avg[i]);    //输出每门课程的平均分数
	}
	printf("\n");


	printf("所有50个分数的中最高的分数为 %.2f,对应的学生和课程为 %d , %d\n", find_score(score), hang + 1, lie + 1);
	printf("平均分方差为：%.2f\n", avg_score_squire(score));
}


int main()
{
	float score[M][N] =      //直接赋值课程分数，亦可以手动输入.
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

	avg_score(score);   //每个学生的平均分

	avg_course(score);  //每门课的平均分数

	find_score(score);  //所有分数中最大的那个分数，并求出是哪个学生的哪门课程

	Print(score);       //打印输出函数

	return 0;
}

