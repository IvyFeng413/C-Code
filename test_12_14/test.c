//#include <stdio.h>
//����һ����stdio.h���ļ�
//std��standar��i-input o-output h-head 

//int main()
//mainΪ������-��������-main�������ҽ���һ��
//int ����
//mainǰ���int��ʾmain�������÷���һ������ֵ

//{
	//printf("hello world\n");
	//printf(print function)-��ӡ����
	//\n����
	
	//char ch = 'A';//�ڴ����һ��ռ�
	//printf("%c\n",ch);//%c - ��ӡ�ַ���ʽ������

	//int age = 20;
	//printf("%d\n", age);//%d - ��ӡ����ʮ��������

	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//short age = 20;// ���ڴ�����2���ֽ�=16bitλ���������20
	//float weight = 95.6f;//���ڴ�����4���ֽ�=4*8bitλ���������95.6

	//return 0;//����ֵΪ0
//}
 
//�ַ�����
//char          //�ַ���������
//short         //������
//int           //����
//long          //������
//long long     //����������
//float         //�����ȸ�����
//double        //˫���ȸ�����

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%f - ��ӡ�������֣�С����
//%p - �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16��������
//%s - ��ӡ�ַ���

//������еĵ�λ
//bit - ����λ
// 1 byte = 8 bit
//byte - �ֽ�
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
//int num2 = 20;//ȫ�ֱ��� - �����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ����� - �����ڴ���飨{}���ڲ��ı���
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
//	//�ֲ�������ȫ�ֱ��������ƽ��鲻Ҫ��ͬ����������������bug
//	//��������ͬʱ���ֲ���������
//	printf("%d\n", a);
//	return 0;
//}

#include <stdio.h>

int main()

{
	//����2�����ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	//�������� - ʹ�����뺯��scanf
	scanf_s("%d%d", &num1, &num2);//VS��ʹ��scanf_s
	//ȡ��ַ������&
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
