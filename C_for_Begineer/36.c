#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a[2];

	scanf("%d", &a[0]);
	scanf("%d", &a[1]);

	printf("�Է���ǥ : (%d,%d)\n", a[0], a[1]);
	printf("X�� ��Ī : (%d,-%d)\n", a[0], a[1]);
	printf("Y�� ��Ī : (-%d,%d)\n", a[0], a[1]);
	printf("������Ī : (-%d,-%d)", a[0], a[1]);
	
	return;
}