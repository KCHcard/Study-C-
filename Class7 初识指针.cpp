#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;
//	printf("%d\n", *pa);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}			
//	return 0;
//}

//#define counterstrike 5
//
//int main()
//{
//	float valve[counterstrike];
//	float* vp;
//	for (vp = &valve[counterstrike]; vp < &valve[counterstrike]; vp++)
//	{
//		*vp = 0;
//		printf("%f ", vp);
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[10] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("arr[%d] = %p <==> p+%d = %p\n", i, &arr[i], i, p + i);
	}
	return 0;
}