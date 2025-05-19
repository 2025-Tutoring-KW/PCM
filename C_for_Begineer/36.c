#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a[2];

	scanf("%d", &a[0]);
	scanf("%d", &a[1]);

	printf("입력좌표 : (%d,%d)\n", a[0], a[1]);
	printf("X축 대칭 : (%d,-%d)\n", a[0], a[1]);
	printf("Y축 대칭 : (-%d,%d)\n", a[0], a[1]);
	printf("원점대칭 : (-%d,-%d)", a[0], a[1]);
	
	return;
}