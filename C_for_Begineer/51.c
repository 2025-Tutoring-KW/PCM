#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int gob = 0;
	int num1;
	scanf("%d", &num1);
	for (int i = 2;i <= 50;i++) {
			if (num1 % i == 0) {
				i--;
				gob += 1;
				num1 / i;
			}
			else if (num1 == i) {

			}
		}

	}

