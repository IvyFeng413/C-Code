//#include <stdio.h>
//包含一个叫stdio.h的文件
//std（standar）i-input o-output h-head 

//int main()
//main为主函数-程序的入口-main函数有且仅有一个
//int 整型
//main前面的int表示main函数调用返回一个整型值

//{
	//printf("hello world\n");
	//printf(print function)-打印函数
	//\n换行
	
	//char ch = 'A';//内存分配一块空间
	//printf("%c\n",ch);//%c - 打印字符格式的数据

	//int age = 20;
	//printf("%d\n", age);//%d - 打印整型十进制数据

	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//short age = 20;// 向内存申请2个字节=16bit位，用来存放20
	//float weight = 95.6f;//向内存申请4个字节=4*8bit位，用来存放95.6

	//return 0;//返回值为0
//}
 
//字符类型
//char          //字符数据类型
//short         //短整型
//int           //整型
//long          //长整型
//long long     //更长的整型
//float         //单精度浮点数
//double        //双精度浮点数

//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字（小数）
//%p - 以地址的形式打印
//%x - 打印16进制数字
//%s - 打印字符串

//计算机中的单位
//bit - 比特位
// 1 byte = 8 bit
//byte - 字节
// 1 kb = 1024 byte
//kb
// 1 mb = 1024  kb
//mb
// 1 tb = 1024  mb
//tb
// 1 pb = 1024  tb
//pb

//#include <stdio.h>
//
//int num2 = 20;//全局变量 - 定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量 - 定义在代码块（{}）内部的变量
//
//	return 0;
//}

//#include <stdio.h>
//
//int a = 100;
//
//int main()
//
//{
//	int a = 10;
//	//局部变量和全局变量的名称建议不要相同，容易生成误会产生bug
//	//当名字相同时，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}

#include <stdio.h>

int main()

{
	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
	//输入数据 - 使用输入函数scanf
	scanf_s("%d%d", &num1, &num2);//VS中使用scanf_s
	//取地址操作符&
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
