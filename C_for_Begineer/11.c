#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num1, num2, ex;

	printf("숫자 1:");
	scanf("%d", &num1);

	printf("숫자 2:");
	scanf("%d", &num2);

	printf("예상 결과:");
	scanf("%d", &ex);

	if (num1 + num2 == ex) {
		printf("정답입니다!");
	}

	else {
		printf("오답입니다!");
	}

	return;
}