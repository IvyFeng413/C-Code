#define _CRT_SECURE_NO_WARNINGS 1

//结构
//1. 顺序结构
//2. 选择结构（分支语句）
//3. 循环结构（循环语句）

//一个语句以;结尾
//; - 是一个空语句

//#include <stdio.h>
//int main()
//{
//	int age = 55;
//
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("期颐\n");
//	return 0;
//}
//else与它离最近未匹配的if进行匹配

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 4;
//	if (5 == num)// = - 赋值//== - 判断相等
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////写出小于100的奇数
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch是整型（int）表达式
//	{
//	case 1://case是整型 常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch是整型（int）表达式
//	{
//	case 1://case是整型 常量表达式
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//
//	switch(n)
//	{
//		case 1: 
//			m++;
//		case 2:
//			n++;
//		case 3:
//			switch(n)
//			{
//		case 1:
//			n++;
//		case 2:
//			m++; n++;
//				break;
//			}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//	}
//	printf("m = %d\nn = %d\n", m, n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF);
	//EOF - enf of file -> -1
	{
		putchar(ch);
	}
	return 0;
}