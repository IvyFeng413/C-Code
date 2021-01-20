#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "############";
//	//               hello\o
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}