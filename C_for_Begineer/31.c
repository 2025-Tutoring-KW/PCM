#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num[5];

	printf("ют╥б:");
	scanf("%d", &num[0]);

	printf("%d ", num[0]);

	for (int i = 1;i < 5;i++) {
		num[i] = num[i - 1] + 10;
	}

	
	for (int i = 1;i < 5;i++) {
		printf("%d ", num[i]);
		}
	
	return;
}