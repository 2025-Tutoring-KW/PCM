#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int D;

	printf("이동 거리(m):");
	scanf("%d", &D);

	if (D > 1600) {
		printf("요금: %d", 4800 + (int) { (D - 1600) / 131 }*100);
	}
	
	else {
		printf("요금: 4800");
	}
}