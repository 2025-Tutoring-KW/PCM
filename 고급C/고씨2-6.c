#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void input_char(char arr[], char* sort_type);
void func_sort(char arr[], char sort_type);
void func_print(char arr[]);

void main() {
    char str[100];
    char sort_type;

    input_char(str, &sort_type);

    func_sort(str, sort_type);

    func_print(str);

}

void input_char(char arr[], char* sort_type) {
    printf("문자열을 입력하세요 (최대 %d자): ", strlen(arr)-1);
    gets_s(arr, strlen(arr));

    printf("정렬 방식을 입력하세요 (오름차순 = A, 내림차순 = B) : ");
    scanf(" %c", sort_type);
}

void func_sort(char arr[], char sort_type) {
    char temp;

    for (int i = 0; i < strlen(arr)-1; i++) {
        for (int j = i + 1; j < strlen(arr); j++) {
            if ((sort_type == 'A' && arr[i] > arr[j]) ||
                (sort_type == 'B' && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void func_print(char arr[]) {
    printf("정렬된 결과: %s", arr);
}
