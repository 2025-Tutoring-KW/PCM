#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CHOIMIN(int a, int b, int c);

void main() {
    int year, month, day, age;

    printf("출생년도 : ");
    scanf("%d", &year);

    printf("월 : ");
    scanf("%d", &month);

    printf("일 : ");
    scanf("%d", &day);

    age = CHOIMIN(year, month, day);

    printf("만 나이 : %d세", age);

    return;
}

int CHOIMIN(int by, int bm, int bd) {
    int age = 2024 - by; 
    if (bm > 3 || (bm == 3 && bd > 2)) {
        age--;
    }
    return age;
}
