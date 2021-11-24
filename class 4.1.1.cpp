#include <stdio.h>
#include <string.h>

//函数声明：函数定义在，main函数后需声明
//int Add(int x, int y);
//函数的定义
//int Add(int x, int y)/*从上到下读取*/
//{
//	int i = 0;
//	i = x + y;
//	return i;
//}
//#include "Add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//43 2 1
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//链式访问
//	return 0;
//}

//void Add(int* x)
//{
//	(*x)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}

//int search(int arr[], int x,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int k = 0;
//	while (left <= right)
//	{
//		k = (left + right) / 2;
//		if (x < arr[k])	
//		{
//			right = k - 1;
//		}
//		else if (x > arr[k])
//		{
//			left = k + 1;
//		}
//		else
//			return k;
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, k, sz);
//	if (ret == 0)
//		printf("找不到\n");
//	else 
//		printf("找到了%d\n", ret);
//	return 0;
//}

//int year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) 
//	{
//		if (year(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int whether(int x)
//{
//	int y = 0;
//	for (y = 2; y < x; y++)
//	{
//		if (x % y == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		if (whether(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////地址和数值
////形参相当于实参的一份拷贝
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d", &a, &b);
//	c = max(a, b);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '@', 3);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "cardles";
//	char arr2[20] = "******************";
//	strcpy_s(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}