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
        printf("�ش� ��ǰ�� �����ϴ�.\n"); 
    }

    return price; 
}

void main() {
    char product[10000]; 
    int total = 0;    
    int price;        

    while (1) {
        printf("��ǰ�� �Է��ϼ��� (���� �� 0 �Է�): ");
        scanf("%s", &product);

        if (strcmp(product, "0") == 0) {
            break;
        }

        price = CHOIMIN(product);
        total += price; 
        
    }

    printf("��ǰ �����Ѿ�: %d��", total);
    return;
}
