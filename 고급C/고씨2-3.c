#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float S(int a);
float TWO_R(int b);

float py = 3.14;

int main() {
	int r;

	printf("반지름을 입력하세요: ");
	scanf("%d", &r);

	float s = S(r);
	float two_r = TWO_R(r);

	// 결과 출력
	printf("원의 넓이: %f\n", s);
	printf("원의 둘레: %f\n", two_r);

	return 0;
}
float S(int a) {
	return py * a * a;
}
float TWO_R(int a) {
	return 2 * py * a;
}