#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a[3][3];
	int b[3][3];

	printf("1번 배열\n");

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	printf("2번 배열\n");

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			scanf("%d", &b[i][j]);
		}
	}
	printf("두 배열의 합\n");

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}