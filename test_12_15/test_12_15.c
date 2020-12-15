//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;//注：位置应在scanf和printf的中间
//	printf("sum = %d\n", sum);
//	
//	return 0;
//}

//如需使用scanf，需要在源文件的第一行添加 #define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;//注：位置应在scanf和printf的中间
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//字面常量
//	//3
//	//100
//	//3.14
//
//	//const - 常属性
//	//num - const修饰的常变量
//	//const int num = 4;
//	//	printf("%d\n", num);
//	//	num = 8;
//	//	printf("%d\n", num);
//
//		const int n = 10;//n是变量但又有常属性，因此n是常变量
//		int arr[n] = { 0 };
//
//	return 0;
//
//}

//#include <stdio.h>
//
//#define MAX 10//#define 定义的标识符常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//
//	return 0;
//}

//枚举常量
//枚举 - 可以一一列举出来
//enum - 枚举关键字

//#include <stdio.h>
//enum Sex {
//	MALE,
//    FEMALE,
//    SECRET
//};
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";//字符串为“”
//	//“abc” - 'a' 'b' 'c' '\0'
//	//'\0' - 字符串结束的标志
//	char arr2[] = { 'a', 'b', 'c','\0' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//printf("c:\test\32\test.c");//\t - 水平制表符
//	printf("c:\\test\\32\\test.c");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32 - 32是2个8进制数字
//	//32作为8进制代表的其十进制数字作为ASCII码所对应的字符
//	//32 -> 26(十进制) ->ASCII码中对应右箭头
//	return 0;
//}

