#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct characterClass {
	char* name;
	int level;
	struct characterClass* nextClass;
} CharacterClass;

int main() {
	CharacterClass arr[5];
	arr[0].name = "Archer";
	arr[1].name = "Cavalry";
	arr[2].name = "Infantry";
	arr[3].name = "Horse Archer";
	arr[4].name = "Spearman";
	arr[0].level = 1;
	arr[1].level = 1;
	arr[2].level = 1;
	arr[3].level = 2;
	arr[4].level = 2;
	arr[0].nextClass = &arr[3];
	arr[1].nextClass = &arr[3];
	arr[2].nextClass = &arr[4];
	printf("출시 예정인 B게임의 전직 트리입니다. (괄호 안 숫자는 레벨을 의미)\n\n");
	printf("%s(%d) : %s(%d)로 전직 가능\n", arr[0].name, arr[0].level, arr[0].nextClass->name, arr[0].nextClass->level);
	printf("%s(%d) : %s(%d)로 전직 가능\n", arr[1].name, arr[1].level, arr[1].nextClass->name, arr[1].nextClass->level);
	printf("%s(%d) : %s(%d)로 전직 가능\n", arr[2].name, arr[2].level, arr[2].nextClass->name, arr[2].nextClass->level);
	printf("%s(%d) : 전직 불가\n", arr[3].name, arr[3].level);
	printf("%s(%d) : 전직 불가\n", arr[4].name, arr[4].level);
	return 0;
}