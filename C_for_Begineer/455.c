#include <stdio.h>

void main() {
    printf("10진수  16진수  문자\n");
    printf("-------------------\n");

    for (int i = 0; i <= 127; i++) {
        printf("%3d     0x%02X    ", i, i);

        if (i < 32 || i == 127) {
            printf("제어문자");  // 출력 불가능한 제어 문자 처리
        }
        else {
            printf("%c", i);   // 일반 문자 출력
        }

        printf("\n");
    }
}
