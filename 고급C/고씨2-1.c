#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void not_pointer(int a, int b);
void pointer(int* a, int* b);

void main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("Before swap, A : %d, B : %d\n", num1, num2);
	printf("\n");
	printf("\n");

	not_pointer(num1, num2);
	printf("After Value swap(in main), A : %d, B : %d\n", num1, num2);
	printf("\n");
	printf("\n");

	pointer(&num1, &num2);
	printf("After Value swap(in main), A : %d, B : %d\n", num1, num2);
}

void not_pointer(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("After Value swap(in function), A : %d, B : %d\n", a, b);
}
void pointer(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	printf("After Value swap(in function), A : %d, B : %d\n", *a, *b);
}