#include <stdio.h>

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s;
//	Stu s1;
//	Stu s2;
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double b;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	struct T t = { "hehe", {3, 'a', "334343434", 3.14}, NULL};
//	return 0;
//}

typedef struct Stu
{
	char name[10];
	int age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu s)
{
	printf("name:%s, age:%d, tel:%s, sex:%s\n", s.name, s.age, s.tele, s.sex);
}

void Print2(Stu* s)
{
	printf("name:%s", s->name);
	printf("age:%d", s->age);
	printf("tel:%s", s->tele);
	printf("sex:%s", s->sex);
}

int main()
{
	struct Stu s = { "张三", 23, "11111112222", "男" };
	Print1(s);
	Print2(&s);//结构体传参应传地址，减少内存占用
	return 0;
}