#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int coor[4][2];

	printf("사용자에게 좌표 입력받기\n");
	scanf("%d %d", &coor[0][0], &coor[0][1]);

	*(*(coor + 1) + 0) = *(*(coor + 0) + 0);
	*(*(coor + 1) + 1) = -*(*(coor + 0) + 1);
	*(*(coor + 2) + 0) = -*(*(coor + 0) + 0);
	*(*(coor + 2) + 1) = *(*(coor + 0) + 1);
	*(*(coor + 3) + 0) = -*(*(coor + 0) + 0);
	*(*(coor + 3) + 1) = -*(*(coor + 0) + 1);

	printf("좌표출력\n");
	printf("입력좌표 : (%d,%d)\n", coor[0][0], coor[0][1]);
	printf("x축 대칭 : (%d,%d)\n", coor[1][0], coor[1][1]);
	printf("y축 대칭 : (%d,%d)\n", coor[2][0], coor[2][1]);
	printf("원점 대칭 : (%d,%d)", coor[3][0], coor[3][1]);

	return;
}