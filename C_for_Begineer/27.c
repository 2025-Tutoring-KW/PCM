#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num;
	int max = -100000000;
	int mini = 123148184;


	while (1) {
		printf("���� �Է�(0 �Է½� ����):");
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
	printf("�ִ� ��: %d\n", max);
	printf("�ּ� ��: %d", mini);

}

