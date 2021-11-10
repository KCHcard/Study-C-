#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>//rand_max

void menu()
{
	printf("******************************\n");
	printf("******  | 1 猜 数 字  | ******\n");
	printf("******  | 0 退出游戏  | ******\n");
	printf("******************************\n");
}

//RAND_MAX

void game()
{
	int ret = 0;
	printf("猜  数  字\n");
	srand(1);
	ret = rand();
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

//int main()
//{
//	int c = 0;
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 9, b <= 9; b++)
//	{
//		c = a * b;
//		printf("%d*%d=%2d ", b, a, c);
//		if (b == 9)
//		{
//			a++;
//			b = a - 1;
//			printf("\n");
//		}
//	}
//	return 0;
//}

////10个整数最大值
//int main()
//{
//	char arr[] = { -1,-2,-3,-4,-5,-33,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum1 = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum1 += flag * 1.0 / i;
//		flag = -flag;
//	}
//	//double sum2 = 0.0;
//	//double he = 0.0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	sum1 += 1.0 / i;
//	//}
//	//for (i = 2; i <= 100; i + 2)
//	//{
//	//	sum2 += 1.0 / i;
//	//}
//	//he = sum1 - sum2;
//	printf("%lf\n", sum1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = i + 1;
//		if (a % 10 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}