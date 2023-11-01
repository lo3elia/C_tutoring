#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int per[4] = { 25, 38, 0, 40 };

void one() {
	int class;
	printf("분반을 선택하세요 (1~4)>");
	scanf("%d", &class);
	class -= 1;
	if (per[class] == 40) {
		printf("%d분반은 수강인원 초과입니다.\n", class);
	}
	else {
		per[class] += 1;
	}
}

void two() {
	int class;
	printf("분반을 선택하세요 (1~4)>");
	scanf("%d", &class);
	class -= 1;
	if (per[class] == 0) {
		printf("%d분반은 수강인원이 없습니다.\n", class);
	}
	else {
		per[class] -= 1;
	}
}


int main() {
	int answer, f = 1;
	printf("===수강신청 관리 프로그램===");
	do {
		printf("\n현재 분반별 C프로그래밍1 수강 인원은 다음과 같습니다.(정원: 40명)\n");
		printf("1분반 %d명 2분반 %d명 3분반 %d명 4분반 %d명\n", per[0], per[1], per[2], per[3]);
		printf("명령을 입력하세요.(1.수강인원 추가, 2.수강인원 감소, 기타.종료)>");
		scanf("%d", &answer);

		switch (answer) {
		case 1:
			one();
			break;
		case 2:
			two();
			break;
		default:
			f = 0;
			break;
		}
		continue;
	} while (f);
	return 0;
}