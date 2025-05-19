#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int CHOIMIN(char product[]) {
    int price;

    if (strcmp(product, "coffee") == 0 || strcmp(product, "bread") == 0) {
        price = 1000;
    }
    else if (strcmp(product, "sprite") == 0 || strcmp(product, "coke") == 0) {
        price = 1500;
    }
    else if (strcmp(product, "lemonade") == 0) {
        price = 2000;
    }
    else {
        printf("해당 제품은 없습니다.\n"); 
    }

    return price; 
}

void main() {
    char product[10000]; 
    int total = 0;    
    int price;        

    while (1) {
        printf("제품을 입력하세요 (종료 시 0 입력): ");
        scanf("%s", &product);

        if (strcmp(product, "0") == 0) {
            break;
        }

        price = CHOIMIN(product);
        total += price; 
        
    }

    printf("제품 구매총액: %d원", total);
    return;
}
