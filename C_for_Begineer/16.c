#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int D;

	printf("�̵� �Ÿ�(m):");
	scanf("%d", &D);

	if (D > 1600) {
		printf("���: %d", 4800 + (int) { (D - 1600) / 131 }*100);
	}
	
	else {
		printf("���: 4800");
	}
}