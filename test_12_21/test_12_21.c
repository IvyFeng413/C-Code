#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	//EOF - enf of file - 文件结束标志
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password [20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码并存放在password数据中
//	//缓冲区还剩余一个'\n'
//	//读取'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
	}
	return 0;
}