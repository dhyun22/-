#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, result;
	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &num1, &num2);
	printf("우 하단의 x, y 좌표: ");
	scanf("%d %d", &num3, &num4);
	
	result = (num3 - num1) * (num4 - num2);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", result);
	return 0;
}