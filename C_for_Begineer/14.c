#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int point;

	printf("���� ����:");
	scanf("%d", &point);

	if (90 <= point) {
		printf("A");
	}
	else if (60 <= point) {
		printf("B");
	}
	else {
		printf("C");
	}
}