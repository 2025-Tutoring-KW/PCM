#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int odd = 0;
	int even = 0;
	
	while (1) {
		int num;
			printf("���� �Է�(0 �Է½� ����):");
			scanf("%d", &num);
			if (num == 0) {
				break;
			}
			else if (num % 2 == 1) {
				odd += num;
			}
			else if (num % 2 == 0) {
				even += num;
			
			}
		
		}
	printf("Ȧ�� ��: %d\n", odd);
	printf("¦�� ��: %d", even);
}
		
	