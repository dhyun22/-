#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, result;
	printf("�� ����� x, y ��ǥ: ");
	scanf("%d %d", &num1, &num2);
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf("%d %d", &num3, &num4);
	
	result = (num3 - num1) * (num4 - num2);
	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.", result);
	return 0;
}