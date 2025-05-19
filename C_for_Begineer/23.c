#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("숫자 입력:");
	scanf("%d", &num);

	for (int i = 1; i <= num;i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = num - 1; i >= 1;i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return;
}
