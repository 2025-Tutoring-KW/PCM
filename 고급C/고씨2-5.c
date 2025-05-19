#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void sort_Ascending(int *arr,int size);
void sort_Dscending(int *arr,int size);

int main(void) {
	int arr[] = { 5,10,12,40,30,150,230,340,3,15,18 };
	int num;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("정렬을 선택하시오 내림차순 = 1, 오름차순 = 2 : ");
	scanf("%d", &num);
	
	if (num == 1) {
		printf("정렬 전 배열 : ");
		for (int i = 0;i < size-1;i++) {
			printf("%d ", arr[i]);
		}
		sort_Ascending(arr,size);
		printf("정렬 후 배열 : ");
		for (int i = 0;i < size-1;i++) {
			printf("%d ", arr[i]);
		}
	}
	else if (num == 2) {
		printf("정렬 전 배열 : ");
		for (int i = 0;i < size-1;i++) {
			printf("%d ", arr[i]);
		}
		sort_Dscending(arr,size);
		printf("정렬 후 배열 : ");
		for (int i = 0;i < size-1;i++) {
			printf("%d ", arr[i]);
		}
	}
	else printf("바보노\n");
}
void sort_Ascending(int* arr,int size) {
	int temp;

	for (int i = 0;i < size-1;i++) {
		for (int j = i + 1;j < size-1;j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void sort_Dscending(int* arr,int size) {
	int temp;

	for (int i = 0;i < size-1;i++) {
		for (int j = i + 1;j < size-1;j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
