#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////���������н��д�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ�֣�a�з����ֵ��b�м䣬c��Сֵ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//  }

////��ӡ3�ı���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 3 == 0)
//			printf("%d ", i);
//	return  0;
//}

////�����Լ����շת�������
//#include <stdio.h>
//int main()
//{
//	int m = 24;
//    int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

////��1000�굽2000��֮�������
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ���꣨������
//		//1. �ܱ�4���������ܱ�1000����
//		//2. �ܱ�400����
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

////��1000�굽2000��֮�������
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//��ӡ100-200������
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{

		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
			//sqrt - ��ƽ������ѧ�⺯��
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}