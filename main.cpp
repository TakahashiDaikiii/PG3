#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>

int main() {
	//�����_���֐�
	srand((unsigned int)time(NULL));
	//newType calc;

	//calc = Lottery;


	int num;
	int select = 0;

	printf("��������I��ł�������\n");
	printf("1�Ɠ��͂���Ɣ��A2�Ɠ��͂���ƒ��ɂȂ�܂�\n");
	scanf_s("%d", &select);
	num = 1 + rand() % 6;

	std::function<void(void)> lottery = [=]() {
		printf("�T�C�R���̖ڂ�%d�ł����B\n", num);

		if (select == 1) {
			if (num == 1 || num == 3 || num == 5) {
				printf("���߂łƂ��������܂��B���ł�");
			}
			else {
				printf("�c�O�Ȃ��璚�ɂȂ�܂��B");
			}
		}

		if (select == 2) {
			if (num == 0 || num == 2 || num == 4 || num == 6) {
				printf("���߂łƂ��������܂��B���ł�");
			}
			else {
				printf("�c�O�Ȃ��甼�ɂȂ�܂��B");
			}
		}

		};

	std::function<void(int)> setTimeout = [=](int second) {
		Sleep(second * 1000);

		lottery();

		};

	setTimeout(3);

	return 0;

}