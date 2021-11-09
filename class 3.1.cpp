#include <stdio.h>
#include <string.h>
#include <math.h>//sqrt 开平方

//int main()
//{
//
//	return 0;
//}

int main()
{
	int num = 0;
	int count = 0;
	for (num = 100; num <= 200; num++)
//	for (num = 101; num<= 199; num+=2) 跳过所有偶数
	{
		int j = 0;
		for (j = 2; j <= sqrt(num); j++)
		{
			if (num % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(num))
		{
			count++;
			printf("%d ", num);
		}
	}
	printf("\n%d", count);
	return 0;
}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if(y%4==0 && y%100 != 0 || y%400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		/*if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		else if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		else
//			continue;*/
//	}
//	printf("\n一共有%d个闰年", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf_s("%d %d", &n, &m);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
	/*if (a > b, a > c)
	{
		printf("%d ", a);
		if (b > c)
			printf("%d ", b);
		else
			printf("%d %d", c, b);
	}
	else if(a < b, b > c)
	{
		printf("%d ", b);
		if (a > c)
			printf("%d ", a);
		else
			printf("%d %d", c, a);
	}
	else if(a < c, b < c)
	{
		printf("%d ", c);
		if (b > a)
			printf("%d ", b);
		else
			printf("%d %d", a, b);
	}*/
//	return 0;
//}