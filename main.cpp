#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef void (*newType)(int*, int*);

void Lottery(int* select, int* num) {

	printf("�T�C�R���̖ڂ�%d�ł����B\n", *num);

	if (*select == 1) {
		if (*num == 1 || *num == 3 || *num == 5) {
			printf("�����I�I�I");
		}
		else {
			printf("�s�����I�I�I");
		}
	}

	if (*select == 2) {
		if (*num == 0 || *num == 2 || *num == 4 || *num == 6) {
			printf("�����I�I�I");
		}
		else {
			printf("�s�����I�I�I");
		}
	}

}

void SetTimeout(newType calc, int second, int select, int num) {

	Sleep(second * 1000);

	calc(&select, &num);

}

int main() {
	//�����_���֐�
	srand((unsigned int)time(NULL));
	newType calc;

	calc = Lottery;

	int num;

	int select = 0;

	printf("���������I��\n");

	printf("1�Ɠ��͂���Ɣ��A2�Ɠ��͂���ƒ��ɂȂ�܂�\n");

	scanf_s("%d", &select);

	num = 1 + rand() % 6;

	SetTimeout(calc, 3, select, num);

	return 0;

}