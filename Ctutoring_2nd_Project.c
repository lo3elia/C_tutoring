//
// Created by 이종천 on 2023-10-11.
//

#include <stdio.h>

int main() {
    int height;
    printf("트리의 높이를 입력하세요(범위 5~15");
    scanf("%d", &height);
    height -= 4;
    for (int a = 0;a < height+1; a++) {
        printf(" ");
    }
    printf("*\n");
    for (int i = 0;i < height; i++) {
        for (int j = 0;j < height - i;j++) {
            printf(" ");
        }
        printf("*");
        for (int k = 0; k<2*i+1;k++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 0;i < 2*height+3 ;i++)
        printf("*");
    printf("\n");
    for (int a = 0;a < height+1; a++) {
        printf(" ");
    }
    printf("ㅣ\n");
    for (int a = 0;a < height+1; a++) {
        printf(" ");
    }
    printf("ㅣ\n");
    return 0;
}