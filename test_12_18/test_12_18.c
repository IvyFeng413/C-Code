#define _CRT_SECURE_NO_WARNINGS 1

//�ṹ
//1. ˳��ṹ
//2. ѡ��ṹ����֧��䣩
//3. ѭ���ṹ��ѭ����䣩

//һ�������;��β
//; - ��һ�������

//#include <stdio.h>
//int main()
//{
//	int age = 55;
//
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}
//else���������δƥ���if����ƥ��

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
//	if (5 == num)// = - ��ֵ//== - �ж����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////д��С��100������
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
//	switch (day)//switch�����ͣ�int�����ʽ
//	{
//	case 1://case������ �������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	switch (day)//switch�����ͣ�int�����ʽ
//	{
//	case 1://case������ �������ʽ
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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