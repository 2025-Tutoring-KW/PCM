#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;

	printf("���� �Է�:");
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

