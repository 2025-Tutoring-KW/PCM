#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int r;

	printf("반지름?");
	scanf("%d", &r);

	printf("둘레:%.1f\n", r * 2 * 3.14);
	printf("넓이:%.1f", r * r * 3.14);

	return;
}