#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sosu(int* arr, int n);

void main() {
	int num;
	int arr[121] = { 0, };

	printf("�Ҽ��� �� ���ϱ��� ����Ͻǰǰ���?(�ִ� 120) : ");
	scanf("%d", &num);

	if (num > 120) {
		printf("�ٺ���");
		return;
	}

	sosu(arr, num);

	for (int i = 2;i <= num;i++) {
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
}
void sosu(int* arr, int n) {
	for (int i = 2;i <= n;i++) {
		arr[i] = i;
	}
	for (int k = 2;k*k <= n;k++) {
		if (arr[k] == 0) 
			continue;
		for (int j = k*2;j <= n;j += k) {
				arr[j] = 0;
			}
		}
	}
