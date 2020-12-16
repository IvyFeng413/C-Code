#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//'\0' - 字符串结束的标志
//	//'\0' - 转义字符 - 等于ASCII码中的0
//	//'0' - 字符0 - ASCII码为48
//	return 0;
//}

////求较大值（法一：直接比较）
//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 5;
//	if (num1 > num2)
//		printf("较大值为%d\n", num1);
//	else
//		printf("较大值为%d\n", num2);
//		
//	return 0;
//}

////求较大值（法二：利用函数）
//#include <stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 5;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("较大值为%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，再使用
//	//int b = a--;//后置--，先使用，再--
//	int b = --a;//前置--，先--，再使用
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}


//整数4个字节=32（4*8）比特位
//负数第一位为1
//只要是整数，内存中存储的都是二进制的补码

//正数 - 原码，反码，补码 都相同

//负数：
//    原码                     -->   反码              -->   补码
//直接按照正负            原码的符号位不变              反码+1
//写出的二进制序列        其他位按位取反得到

//    原码                     <--   反码              <--   补码
//                                                      补码-1

//例如：-2
//原码：10000000000000000000000000000010
//反码：11111111111111111111111111111101
//补码：11111111111111111111111111111110

//#include <stdio.h>
//
//void test()
//{
//	//static修饰局部变量 - 局部变量的生命周期边长
//	//static修饰全部变量 - 改变变量作用域，使静态的全局变量只能在该源文件内部使用
//	//static修饰函数 - 改变函数的链接属性
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 10;//4个字节
	int* p = &a;//取地址
	//printf("%p\n", &a);
	//printf("%p\n", p);
	*p = 20;
	printf("a =%d\n", a);
	return 0;
}