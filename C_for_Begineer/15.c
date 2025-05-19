#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int m, d;

	printf("¿ù:");
	scanf("%d", &m);
	printf("ÀÏ:");
	scanf("%d", &d);

	if (m == 1) {
		printf("D-%d", d);
	}
	else if (m == 2) {
		printf("D-%d", 31+d);
	}
	else if (m == 3) {
		printf("D-%d", 59 + d);
	}
	else if (m == 4) {
		printf("D-%d", 90 + d);
	}
	else if (m == 5) {
		printf("D-%d", 120 + d);
	}
	else if (m == 6) {
		printf("D-%d", 151 + d);
	}
	else if (m == 7) {
		printf("D-%d", 181 + d);
	}
	else if (m == 8) {
		printf("D-%d", 212 + d);
	}
	else if (m == 9) {
		printf("D-%d", 243+ d);
	}
	else if (m == 10) {
		printf("D-%d", 273 + d);
	}
	else if (m == 11) {
		printf("D-%d", 303 + d);
	}
	else if (m == 12) {
		printf("D-%d", 333 + d);
	}
	
}