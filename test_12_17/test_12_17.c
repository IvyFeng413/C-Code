#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 10;//申请4个字节的空间
//	printf("%p\n", &a);
//	int* p = &a;//p是变量 - 指针变量
//	//* - 解引用操作符/间接访问操作符
//	printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//指针大小与电脑位数相同
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

////结构体
//#include <stdio.h>
//struct Book//创建一个结构体类型
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* pb = &b1;
//	//利用指针pb打印书名和价格
//	//. - 结构体变量.成员
//	//-> - 结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);*/
//	return 0;
//}

#include <stdio.h>
#include <string.h>
struct Book{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝 - string.h
	printf("%s\n", b1.name);
	return 0;
}