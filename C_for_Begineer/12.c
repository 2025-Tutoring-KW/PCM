#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int data;

	printf("���� �Է�:");
	scanf("%d", &data);

	if (data < 70) {
		printf("�������Դϴ�");
	}
	else if ( data<= 109) {
		printf("���������Դϴ�");
	}

	else {
		printf("�������Դϴ�");
	}
	
}