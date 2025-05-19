#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    char str1[11];
    char str2[11];
 
    scanf("%10s", &str1);
    scanf("%10s", &str2);

    if (str1==str1) {
        printf("같습니다\n");
    }
    else {
        printf("다릅니다\n");
    }

    return;
}