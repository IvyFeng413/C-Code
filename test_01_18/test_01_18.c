#define _CRT_SECURE_NO_WARNINGS 1
////写出1~100中含有9的数字存在的个数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	//9 19 29 39...99 - 10
//	//90 91 92 93...99 - 10
//	return 0;
//}

////计算1/1-1/2+1/3-1/4...+1/99-1/100的值并打印结果
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

////求10个整数中的最大值
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int MAX = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > MAX)
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("MAX = %d\n", MAX);
//	return 0;
//}

//在屏幕上输出9*9的乘法口诀表
//1*1
//2*1 2*2
//3*1 3*2 3*3
//...
//#include <stdio.h>
//int main()
//{
//	int i = 0;//打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////猜数字游戏
////1，电脑随机生成一个数字
////2. 猜数字
//#include <stdio.h>
//#include <time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1. play   0.exit  ******\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//1. 生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;//生成1~100之间的随机数
//	//2. 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//关机小游戏
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//shutdown -s -t 60 60s关机命令符
	while (1)
	{
		printf("请注意，你的电脑将在60s后关机。若输入：“我是猪”即可取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//strcmp() - 比较两个字符串
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}