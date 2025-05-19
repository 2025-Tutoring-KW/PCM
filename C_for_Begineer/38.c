#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char hwamoon[45];
	int length, j = 0;


	printf("문자열 입력 : ");
	scanf("%s", &hwamoon);

	length = strlen(hwamoon);

	for (int i = 0; i < length / 2; i++) {
		if (hwamoon[i] == hwamoon[length - i - 1]) {
			j += 0;
		}
		else {
			j += 1;
		}
	}
	if (j == 0) {
		printf("화문 입니다");
	}
	else {
		printf("화문이 아닙니다");
	}
}
	
	
