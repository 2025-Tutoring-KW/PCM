#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int sum[11];
	sum[0] = 0;

	for (int i = 1; i <= 10; i++) {
		sum[i] = sum[i - 1] + i;
		printf("1���� %d ������ ��: %d\n", i, sum[i]);
	}
}	