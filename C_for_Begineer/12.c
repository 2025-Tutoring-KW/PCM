#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int data;

	printf("혈당 입력:");
	scanf("%d", &data);

	if (data < 70) {
		printf("저혈당입니다");
	}
	else if ( data<= 109) {
		printf("정상혈당입니다");
	}

	else {
		printf("고혈당입니다");
	}
	
}