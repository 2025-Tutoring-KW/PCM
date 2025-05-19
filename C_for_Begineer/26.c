#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int odd = 0;
	int even = 0;
	
	while (1) {
		int num;
			printf("숫자 입력(0 입력시 종료):");
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
	printf("홀수 합: %d\n", odd);
	printf("짝수 합: %d", even);
}
		
	