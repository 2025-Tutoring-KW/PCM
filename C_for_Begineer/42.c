#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void choimin(int num);

void main(void) {
    int num;

    scanf("%d", &num);

    choimin(num);
}

void choimin(int num) {
    for (int i = 9; i >= 1; i--) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}