#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int odd[10];
	int	even[10];
	int num[10];
	int a = 0;
	int b = 0;

	printf("총 10개의 숫자 입력:\n");

	for (int i = 0;i < 10;i++) {
		scanf("%d", &num[i]);
	}

	for (int x = 0;x < 10;x++) {
		if (*(num + x) % 2 == 1) {
			*(odd + a) = *(num + x);
			a++;
		}
		else if (*(num + x) % 2 == 0) {
			*(even + b) = *(num + x);
			b++;
		}
	}
	
	for (int x = 0;x < a;x++) {
		printf("%d ", odd[x]);
	}
	for (int x = b-1;x >=0 ;x--) {
		printf("%d ",even[x]);
	}
}

