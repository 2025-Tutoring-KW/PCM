#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int choimin(int arr[2], int size);

int main() {
    int arr[2];

    for (int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d 부터 %d까지의 합 : %d", arr[0], arr[1], choimin(arr, 2));

    return 0;
}
int choimin(int arr[2], int size){
    int sum = 0;
    if (arr[1] < arr[0]) {
        int a = arr[0];
        arr[0] = a;
        arr[0] = arr[1];
        arr[1] = a;
        
    }
    for (int i = arr[0]; i <=arr[1]; i++) {
        sum += i;
    }
    return sum;

    return 0;
}