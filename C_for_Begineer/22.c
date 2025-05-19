#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("숫자 입력:");
	scanf("%d", &num);

	for (int i = 0;i < num;i++) {
		for (int j = 0; j < i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}
