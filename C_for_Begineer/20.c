#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	printf("숫자 입력:");
	scanf("%d", &a);

	for (int b = 1;b <= a;b++) {
		printf("*****\n");
	}
}