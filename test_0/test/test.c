#define _CRT_SECURE_NO_WARNINGS 1
//  4_9_2
//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("请输入一个不大于五位数的整数：");
//	scanf("%d", &num);
//	if (num > 99999 || num < 0)
//	{
//		printf("输入不合法!\n");
////		return -1;
//	}
//	if (num>= 10000)
//		printf("%d ", num / 10000);
//	if (num >= 1000)
//		printf("%d ", num % 10000 / 1000);
//	if (num >= 100)
//		printf("%d ", num % 1000 / 100);
//	if (num >= 10)
//		printf("%d ", num % 100 / 10);
//	if (num >= 0)
//		printf("%d ", num % 10);
//	system("pause");
//	return 0;
//}

//  4_9_3
//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("请输入一个不大于五位数的整数：");
//	scanf("%d", &num);
//	if (num > 99999 || num < 0)
//	{
//		printf("输入不合法!\n");
//		//		return -1;
//	}
//	if (num >= 0)
//		printf("%d ", num % 10);
//	if (num >= 10)
//		printf("%d ", num % 100 / 10);
//	if (num >= 100)
//		printf("%d ", num % 1000 / 100);
//	if (num >= 1000)
//		printf("%d ", num % 10000 / 1000);
//	if (num >= 10000)
//		printf("%d ", num / 10000);
//	system("pause");
//	return 0;
//}


//例5_6
//#include<stdio.h>
//int main()
//{
//	int i, j, n = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0)
//				printf("\n");
//			if (i == 3 && j == 1)
//				break;
//			printf("%2d\t",i*j);
//		}
//	}
//	printf("\n");
//	return 0;
//}


// 5_4
//#include<stdio.h>
//int main()
//{
//	char c;
//	int letters = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
//			letters++;
//		else if (c >= '0'&&c <= '9')
//			digit++;
//		else if (c == ' ')
//			space++;
//		else
//			other++;
//	}
//	printf("字母的个数：%d\n", letters);
//	printf("空格的个数：%d\n", space);
//	printf("数字的个数：%d\n", digit);
//	printf("其他字符的个数：%d\n", other);
//	return 0;
//}



// 5_5 方法一
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, a;
//	double i = 0;
//	double tn = 0, sn = 0;
//	printf("请输入a，n的值：");
//	scanf("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tn = tn + a*pow(10.0, i);
//		sn = sn + tn;
//	}
//	printf("%.0lf\n", sn);
//	return 0;
//}



// 5_5 方法二
//#include<stdio.h>
//int main()
//{
//	int a, n;
//	int i = 0;
//	int tn = 0, sn = 0;
//	while (i < n)
//	{
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//		i++;
//	}
//	printf("%d\n", sn);
//	return 0;
//}


// 5_6  求 1！+ 2！+ 3！+ 4！+...+ 20！ （方法一）
//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;;
//	double sum = 0.0, temp = 1.0;
//	for (i = 1; i <= 20; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			temp = temp*j;
//		}
//		sum = sum + temp;
//		temp = 1.0;          //注意这句代码主要是清除每一项求完阶乘后的数据，为了不影响下次使用。
//	}
//	printf("%22.15e\n", sum);
//	return 0;
//}



// 5_6  求 1！+ 2！+ 3！+ 4！+...+ 20！ （方法二）
//#include<stdio.h>
//int main()
//{
//	double temp = 1.0, sum = 0;
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		temp = temp*i;
//		sum = sum + temp;
//	}
//	printf("%22.15e\n", sum);
//	printf("%lf\n", sum);
//	return 0;
//}


// 5_7
//#include<stdio.h>
//int main()
//{
//	double total_sum = 0.0, sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum1 = sum1 + i;
//		if (i <= 50)
//		{
//			sum2 = sum2 + i*i;
//		}
//		if (i <= 10)
//		{
//			sum3 = sum3 + 1.0 / i;
//		}
//	}
//	total_sum = sum1 + sum2 + sum3;
//	printf("%lf\n", total_sum);
//	return 0;
//}


// 5_8 水仙花数
//#include<stdio.h>
//int main()
//{
//	int i = 100;
//	int a, b, c;
//	for (i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (a*a*a + b*b*b + c*c*c == i)
//			printf("%d\t", i);
//	}
//	printf("\n");
//	return 0;
//}



// 5_9   找出1000以内的所有完数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int factor_sum = 0;
//	for (i = 2; i <= 1000; i++)
//	{
//		factor_sum = 0;
//		for (j = 1; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//				factor_sum += j;
//		}
//		if (factor_sum == i)
//		{
//			printf("%d its factors are ", i);
//			for (j = 1; j <= i / 2; j++)
//			{
//				if (i % j == 0)
//				{
//					printf("%d ", j);
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//  5_10    
//#include<stdio.h>
//int main()
//{
//	double a = 2.0, b = 1.0, total_sum = 0.0;
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < 20; i++)
//	{
//		total_sum = total_sum + a / b;
//		temp = a + b;
//		b = a;
//		a = temp;
//	}
//	printf("%lf\n", total_sum);
//	return 0;
//}



// 5_11
//#include<stdio.h>
//int main()
//{
//	double total_m = 100.0;
//	double total_sum = 0.0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		total_sum = total_sum + total_m;
//		total_m = total_m / 2.0;
//		total_sum = total_sum + total_m;
//	}
//	total_sum = total_sum - total_m;
//	printf("小球经过的总米数 %lf\n小球第10次反弹的高度 %lf\n", total_sum, total_m);
//	return 0;
//}



// 5_12
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < 9; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//5_13 迭代法
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x0, x1, a;
//	int count = 0;
//	scanf("%f", &a);
//	x0 = a / 2;                   //随便给定一个初始值。
//	x1 = (x0 + a / x0) / 2;
//	while (fabs(x0 - x1) >=1e-5)
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//		count++;
//	}
//	printf("%f 的平方根为 %f\n", a, x1);
//	printf("\t%d\n", count);
//	return 0;
//}


//5_14 牛顿迭代法
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x0 = 1.5;
//	float x1 = 0.0;
//	x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0*x0 - 8 * x0 + 3); //可以提取公因式，在来带入
//	while (fabs(x0 - x1) >= 1e-5)
//	{
//		x0 = x1;
//		x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0*x0 - 8 * x0 + 3);//可以提取公因式，在来带入
//	}
//	printf("%f\n", x1);
//	return 0;
//}



//5_15  二分法
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double left = -10, right = 10, mid;
//	double temp = 10;                     //  将 mid 带入方程后算出的结果存放在 temp 中。       
//	while (fabs(temp)>=1e-5)
//	{
//		mid = (left + right) / 2.0;
//		temp = 2 * mid*mid*mid - 4 * mid*mid + 3 * mid - 6;
//		if (temp > 0)
//		{
//			right = mid;
//		}
//		else if (temp < 0)
//		{
//			left = mid;
//		}
//	}
//	printf("%lf\n", mid);
//	return 0;
//}



//5_16
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3 - i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//			printf(" ");
//		for (j = 0; j < 7 - 2 * (i + 1); j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//5_17
//#include<stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	for (A = 'X'; A <= 'Z'; A++)
//		for (B = 'X'; B <= 'Z'; B++)
//			for (C = 'X'; C <= 'Z'; C++)
//			if (A != 'X'&& C != 'X'&&C != 'Z'&&A != B&&A != C&&B != C)
//				printf("A--%c B--%c C--%c\n", A, B, C);
//	return 0;
//}



// 6_1  筛选法求素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[0] = 0;
//	for (i = 1; i < sqrt(100.0); i++)
//	{
//		if (arr[i] != 0)
//		{
//			for (j = i + 1; j < 100; j++)
//			{
//				if (arr[j] != 0 && arr[j] % arr[i] == 0)
//					arr[j] = 0;
//			}
//		}
//	}
//
//
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%2d ", arr[i]);
//			count++;
//		}
//		if (count == 10)
//		{
//			printf("\n");
//			count = 0;
//		}
//	}
//	printf("\n");
//
//	return 0;
//}


//6_2 选择法排序
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < 9;j++)  //n个数字比n-1趟
//	{
//		int tag = 0;
//		for (i = 1; i < 10-j; i++) //n个数字第一趟比n-1趟
//		{                          //第二趟比n-1-1
//			if (arr[i]>arr[tag])
//				tag = i;
//		}
//		if (j != 10)
//		{
//			int temp = 0;
//			temp = arr[9 - j];
//			arr[9 - j] = arr[tag];
//			arr[tag] = temp;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}



// 6_3 矩阵的对角线之和
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum_left = 0;
//	int sum_right = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		sum_left += arr[i][i];
//	}
//	for (i = 0, j = 2; i < 3; i++, j--)
//	{
//		sum_right += arr[i][j];
//	}
//	printf("左上到右下的对角线之和为：%d\n", sum_left);
//	printf("右上到左下的对角线之和为：%d\n", sum_right);
//	return 0;
//}



// 6_4
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,6,7,8,9,10};
//	int i = 0;
//	int temp = -1;
//	for (i = 10; i > 0; i--)
//	{
//		if (temp < arr[i - 2] && i - 2 >= 0)
//			arr[i - 1] = arr[i - 2];
//		else
//		{
//			arr[i - 1] = temp;
//			break;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//6_5
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int begin = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	int temp = 0;
//	int i = 0;
//	printf("原本的顺序：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	while (begin < end)
//	{
//		temp = arr[begin];
//		arr[begin] = arr[end];
//		arr[end] = temp;
//		begin++;
//		end--;
//	}
//	printf("原本的顺序：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//6_6 输出杨辉三角前10行
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (0 == j || i == j)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6_7 输出魔方阵（方法一）
//#include<stdio.h>
//int main()
//{
//	int arr[99][99] = { 0 };
//	int n;
//	int i = 0, j = 0;
//	int x = 0, y = 0;
//	int H = 0, L = 0;
//	while (1)
//	{
//		printf("请输入奇魔方阵的阶数n（3~100之间）：");
//		scanf("%d", &n);
//		if (n % 2 != 0 && (n >= 3 && n < 100))
//			break;
//	}
//	y = n / 2;
//	arr[x][y] = 1;
//	for (i = 2; i <= n*n; i++)
//	{
//		x--;
//		y++;
//		if (x < 0)
//			x = n-1;
//		if (y >= n)
//			y = 0;
//		if (arr[x][y] != 0)
//		{
//			x = H + 1;
//			y = L;
//		}
//		arr[x][y] = i;
//		H = x;
//		L = y;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%6d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//6_7 输出魔方阵（方法二）输入15阶魔方就会溢出
//#include<stdio.h>
//int main()
//{
//	int a[15][15], i, j, k, p, n;
//	p = 1;
//	while (p == 1)
//	{
//		printf("enter n(1--15):");
//		scanf("%d", &n);
//		if ((n != 0) && (n <= 15) && (n % 2 != 0))
//			p = 0;
//	}
//	for (i = 1; i <= n;i++)
//	for (j = 1; j <= n; j++)
//		a[i][j] = 0;
//	j = n / 2 + 1;
//	a[1][j] = 1;
//	for (k = 2; k <= n*n; k++)
//	{
//		i = i - 1;
//		j = j + 1;
//		if ((i<1) && (j>n))
//		{
//			i = i + 2;
//			j = j - 1;
//		}
//		else
//		{
//			if (i < 1) i = n;
//			if (j>n) j = 1;
//		}
//		if (a[i][j] == 0)
//		{
//			a[i][j] = k;
//		}
//		else
//		{
//			i = i + 2;
//			j = j - 1;
//			a[i][j] = k;
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main(){
//	int i;
//	char name[100];
//	printf("目标：");
//	scanf("%s", &name, 40);
//	printf("次数：");
//	scanf("%d", &i);
//	HWND H = FindWindow(0, name);	
//	while (i)
//	{
//		SendMessage(H, WM_PASTE, 0, 0);	
//		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);
//		i--;
//	}
//}
