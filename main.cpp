#include<stdio.h>
#include<thread>
#include <iostream>
void Printf1()
{
	printf("thread1\n");
};

void Printf2()
{
	printf("thread2\n");
};

void Printf3()
{
	printf("thread3\n");
};

int main()
{
	//�}���`�X���b�h�̏ꍇ
	std::thread th1(Printf1);
	th1.join();

	std::thread th2(Printf2);
	th2.join();

	std::thread th3(Printf3);
	th3.join();



	std::cout << "�v���O�������I�����܂����B�����L�[����͂��ďI�����Ă��������B" << std::endl;
	std::cin.get();

	return 0;
}