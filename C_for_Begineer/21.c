#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("숫자 입력:");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {

		if (i % 2 == 1) {
			printf("* * *\n");
		}
		else if (i % 2 == 0) {
			printf(" * * \n");
		}
	}
}

