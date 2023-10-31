//
// Created by 이종천 on 2023-10-11.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int height;
    printf("트리의 높이를 어ㅏㅏ범위 5~15");
    scanf("%d", &height);
    height -= 4;
    for (int a = 0; a < height + 1; a++) {
        printf(" ");
    }
    printf("|\n");
    for (int a = 0; a < height + 1; a++) {
        printf(" ");
    }
    printf("|\n");
    for (int i = 0; i < 2 * height + 3; i++)
        printf("*");
    printf("\n");


    for (int i = 0; i < height; i++) {
        for (int k = 0; k < i+1; k++) {
            printf(" ");
        }
        printf("*");
        for (int j = 0;j<2*(height-i)-1;j++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int a = 0; a < height + 1; a++) {
        printf(" ");
    }
    printf("*\n");
    return 0;
}