#include <stdio.h>

void main() {
    printf("10����  16����  ����\n");
    printf("-------------------\n");

    for (int i = 0; i <= 127; i++) {
        printf("%3d     0x%02X    ", i, i);

        if (i < 32 || i == 127) {
            printf("�����");  // ��� �Ұ����� ���� ���� ó��
        }
        else {
            printf("%c", i);   // �Ϲ� ���� ���
        }

        printf("\n");
    }
}
