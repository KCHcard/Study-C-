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
	printf("��ĵ��Խ���һ���Ӻ�ػ�����Ҫȡ���������롰123��\n������>");
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
//	printf("******  | 1 �� �� ��  | ******\n");
//	printf("******  | 0 �˳���Ϸ  | ******\n");
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
//	printf("$$$$$$$$$$$$$$$$$$$   ��  ��  ��   $$$$$$$$$$$$$$$$$$$\n");
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("����������>");
//		scanf_s("%d", &i);
//		if (i < ret)
//		{
//			left = i;
//			printf("����%d-%d֮��\n", left, right);
//		}
//		else if (i > ret)
//		{
//			right = i;
//			printf("����%d-%d֮��\n", left, right);
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
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
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			game();
//			break;
//		case 0:
//			system("cls");
//			printf("���˳�\n");
//			break;
//		default:
//			system("cls");
//			printf("ѡ�����\n");
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