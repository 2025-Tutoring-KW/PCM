#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CHOIMIN(int a, int b, int c);

void main() {
    int year, month, day, age;

    printf("����⵵ : ");
    scanf("%d", &year);

    printf("�� : ");
    scanf("%d", &month);

    printf("�� : ");
    scanf("%d", &day);

    age = CHOIMIN(year, month, day);

    printf("�� ���� : %d��", age);

    return;
}

int CHOIMIN(int by, int bm, int bd) {
    int age = 2024 - by; 
    if (bm > 3 || (bm == 3 && bd > 2)) {
        age--;
    }
    return age;
}
