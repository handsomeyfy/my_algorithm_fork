#define  _CRT_SECURE_NO_WARNINGS
//�� %f ��ʽ������д�뵽�ַ�����
#define _USE_MATH_DEFINES 1  //���Ҫʹ��<math.h>����ĺ꣬��Ҫ����_USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>

int main()
{
	char str[80];

	sprintf(str, "Pi ��ֵ = %f", M_PI);
	puts(str);

	return(0);
}
