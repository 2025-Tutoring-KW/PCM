#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    int num[10];
    int max, mini;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    mini = num[0];


    for (int i = 1; i < 10; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        else if (num[i] < mini) {
            mini = num[i];
        }
    }

    printf("ÃÖ¼Ú°ª: %d\n", mini);
    printf("ÃÖ´ñ°ª: %d\n", max);

    return;
}
