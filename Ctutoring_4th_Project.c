#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int per[4] = { 25, 38, 0, 40 };

void one() {
	int class;
	printf("�й��� �����ϼ��� (1~4)>");
	scanf("%d", &class);
	class -= 1;
	if (per[class] == 40) {
		printf("%d�й��� �����ο� �ʰ��Դϴ�.\n", class);
	}
	else {
		per[class] += 1;
	}
}

void two() {
	int class;
	printf("�й��� �����ϼ��� (1~4)>");
	scanf("%d", &class);
	class -= 1;
	if (per[class] == 0) {
		printf("%d�й��� �����ο��� �����ϴ�.\n", class);
	}
	else {
		per[class] -= 1;
	}
}


int main() {
	int answer, f = 1;
	printf("===������û ���� ���α׷�===");
	do {
		printf("\n���� �йݺ� C���α׷���1 ���� �ο��� ������ �����ϴ�.(����: 40��)\n");
		printf("1�й� %d�� 2�й� %d�� 3�й� %d�� 4�й� %d��\n", per[0], per[1], per[2], per[3]);
		printf("����� �Է��ϼ���.(1.�����ο� �߰�, 2.�����ο� ����, ��Ÿ.����)>");
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