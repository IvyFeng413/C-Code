#define _CRT_SECURE_NO_WARNINGS 1
////д��1~100�к���9�����ִ��ڵĸ���
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

////����1/1-1/2+1/3-1/4...+1/99-1/100��ֵ����ӡ���
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

////��10�������е����ֵ
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

//����Ļ�����9*9�ĳ˷��ھ���
//1*1
//2*1 2*2
//3*1 3*2 3*3
//...
//#include <stdio.h>
//int main()
//{
//	int i = 0;//��ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��������Ϸ
////1�������������һ������
////2. ������
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
//	//1. ����һ�������
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;//����1~100֮��������
//	//2. ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//�ػ�С��Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//shutdown -s -t 60 60s�ػ������
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���60s��ػ��������룺������������ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//strcmp() - �Ƚ������ַ���
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}