#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int my_strlen(char str[])//��������д��������ʽ
int my_strlen(char* str)//str���a�ĵ�ַ//��������д��ָ����ʽ
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//����һ���ַ�
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);//��Ԫ�ص�ַ
	printf("%d\n", len);
	
	
		
	return 0;
}