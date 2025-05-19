#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;
	int max = -100000000;
	int mini = 123148184;


	while (1) {
		printf("숫자 입력(0 입력시 종료):");
		scanf("%d", &num);


		if (num == 0) {
			break;
		}
		else if (max <= num) {
			max = num;
		}
		else if (mini >= num) {
			mini = num;
		}

	}
	printf("최대 값: %d\n", max);
	printf("최소 값: %d", mini);

}

