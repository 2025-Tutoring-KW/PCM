#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    int num[3];

    for (int i = 0;i < 3;i++) {
        scanf("%d", &num[i]);
    }

    int max = num[0];

    for (int i = 1; i < 3; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    if (num[0] == num[1] && num[1] == num[2] && num[0] == num[2]) {
        printf("���ﰢ��");
    }
    else if (num[0] == num[1] || num[1] == num[2]  || num[0] == num[2]  ) {
        printf("�̵�ﰢ��");
    }
    else if (max * max == num[0] * num[0] + num[1] * num[1] || max * max == num[1] * num[1] + num[2] * num[2] || max * max == num[0] * num[0] + num[2] * num[2]) {
        printf("�����ﰢ��");
    }
    else if (num[0] + num[1] > num[2] && num[1] + num[2] > num[0] && num[0] + num[2] > num[1]) {
        printf("�ﰢ��");
    }
    else {
        printf("�ﰢ���� �ƴմϴ�.");
    }
    return;
}