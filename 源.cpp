#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int my_strlen(char str[])//��������д��������ʽ
int my_strlen(char* str)//str���a�ĵ�ַ//��������д��ָ����ʽ
{
	if (*str != '\0')
		return 1 + my_strlen(str+1);//str+1Ϊb�ĵ�ַ�����Ƽ�str++
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);//��Ԫ�ص�ַ
	printf("%d\n", len);
	
	
		
	return 0;
}