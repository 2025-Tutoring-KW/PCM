#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int r;

	printf("������?");
	scanf("%d", &r);

	printf("�ѷ�:%.1f\n", r * 2 * 3.14);
	printf("����:%.1f", r * r * 3.14);

	return;
}