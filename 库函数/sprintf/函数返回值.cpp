#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//sprintf�����ķ���ֵ������Ŀ���ַ���ĩβ�Զ���ӵ�'\0'
int main()
{
	int num = 886;
	char str[] = "goodby";
	char dest[20];
	int len = sprintf(dest, "%s is %d", str, num);
	puts(dest);
	printf("len = %d\n", len);
}

