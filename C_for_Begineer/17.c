#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c;
	int d, e, f;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c) {
		d = a;
		e = b;
		f = c;
	}
	else if (b > a && b > c) {
		d = b;
		e = a;
		f = c;
	}
	else if (c > a && c > b) {
		d = c;
		e = a;
		f = b;
	}

	if (e + f > d) {
		printf("�ﰢ���� �׸� �� �ֽ��ϴ�");
	}
	else {
		printf("�ﰢ���� �׸� �� �����ϴ�");
	}
}