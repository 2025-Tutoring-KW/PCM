#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num[2];
	double avg;

	scanf("%d %d", &num[0], &num[1]);

	avg = (double)(num[0] + num[1]) / 2;

	if (avg > (int)avg) {
		printf("%f", avg);
	}
	else {
		printf("%d", (int)avg);
	}

}