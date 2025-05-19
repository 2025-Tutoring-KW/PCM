#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void not_pointer(int a[2]);
void pointer(int* b[2]);

void main() {
	int num[2];

	scanf("%d", &num[0]);
	scanf("%d", &num[1]);

	printf("Before Swap: %d %d\n", num[0], num[1]);
	not_pointer(num);

	printf("\n");
	printf("\n");

	printf("Before Swap: %d %d\n", num[0], num[1]);

	int* num1[2] = { &num[0], &num[1] };
	pointer(num1);
	
}

void not_pointer(int a[2]) {
	int temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;

	printf("Swap by index: %d %d\n", a[0],a[1]);
}
void pointer(int* b[2]) {
	int temp;

	temp = *b[0];
	*b[0] = *b[1];	
	*b[1] = temp;

	printf("Swap by pointer: %d %d\n", *b[0],*b[1]);
}