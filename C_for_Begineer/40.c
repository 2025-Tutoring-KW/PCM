#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int coor[4][2];

	printf("����ڿ��� ��ǥ �Է¹ޱ�\n");
	scanf("%d %d", &coor[0][0], &coor[0][1]);

	*(*(coor + 1) + 0) = *(*(coor + 0) + 0);
	*(*(coor + 1) + 1) = -*(*(coor + 0) + 1);
	*(*(coor + 2) + 0) = -*(*(coor + 0) + 0);
	*(*(coor + 2) + 1) = *(*(coor + 0) + 1);
	*(*(coor + 3) + 0) = -*(*(coor + 0) + 0);
	*(*(coor + 3) + 1) = -*(*(coor + 0) + 1);

	printf("��ǥ���\n");
	printf("�Է���ǥ : (%d,%d)\n", coor[0][0], coor[0][1]);
	printf("x�� ��Ī : (%d,%d)\n", coor[1][0], coor[1][1]);
	printf("y�� ��Ī : (%d,%d)\n", coor[2][0], coor[2][1]);
	printf("���� ��Ī : (%d,%d)", coor[3][0], coor[3][1]);

	return;
}