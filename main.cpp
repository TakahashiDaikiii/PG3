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
	//マルチスレッドの場合
	std::thread th1(Printf1);
	th1.join();

	std::thread th2(Printf2);
	th2.join();

	std::thread th3(Printf3);
	th3.join();



	std::cout << "プログラムが終了しました。何かキーを入力して終了してください。" << std::endl;
	std::cin.get();

	return 0;
}