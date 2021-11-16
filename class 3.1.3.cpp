#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("Attention\n");
	printf("你的电脑将在一分钟后关机，如要取消，请输入“123”\n请输入>");
	scanf_s("%s", input);
	if (strcmp(input, "123") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//void menu()
//{
//	printf("******************************\n");
//	printf("******  | 1 猜 数 字  | ******\n");
//	printf("******  | 0 退出游戏  | ******\n");
//	printf("******************************\n");
//}
//
////RAND_MAX
//
//void game()
//{
//	int left = 1;
//	int right = 100;
//	int i = 0;
//	int ret = 0;
//	printf("$$$$$$$$$$$$$$$$$$$   猜  数  字   $$$$$$$$$$$$$$$$$$$\n");
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入数字>");
//		scanf_s("%d", &i);
//		if (i < ret)
//		{
//			left = i;
//			printf("数在%d-%d之间\n", left, right);
//		}
//		else if (i > ret)
//		{
//			right = i;
//			printf("数在%d-%d之间\n", left, right);
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			game();
//			break;
//		case 0:
//			system("cls");
//			printf("已退出\n");
//			break;
//		default:
//			system("cls");
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//int main()
//{
//	again:
//	printf("hello guys\n");
//	goto again;
//}