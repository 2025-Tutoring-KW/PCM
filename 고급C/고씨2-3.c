#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float S(int a);
float TWO_R(int b);

float py = 3.14;

int main() {
	int r;

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &r);

	float s = S(r);
	float two_r = TWO_R(r);

	// ��� ���
	printf("���� ����: %f\n", s);
	printf("���� �ѷ�: %f\n", two_r);

	return 0;
}
float S(int a) {
	return py * a * a;
}
float TWO_R(int a) {
	return 2 * py * a;
}