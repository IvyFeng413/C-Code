#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 10;//����4���ֽڵĿռ�
//	printf("%p\n", &a);
//	int* p = &a;//p�Ǳ��� - ָ�����
//	//* - �����ò�����/��ӷ��ʲ�����
//	printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//ָ���С�����λ����ͬ
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

////�ṹ��
//#include <stdio.h>
//struct Book//����һ���ṹ������
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 55 };
//	struct Book* pb = &b1;
//	//����ָ��pb��ӡ�����ͼ۸�
//	//. - �ṹ�����.��Ա
//	//-> - �ṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
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
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++");//strcpy - string copy - �ַ������� - string.h
	printf("%s\n", b1.name);
	return 0;
}