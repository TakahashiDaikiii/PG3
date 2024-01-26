#include<stdio.h>
#include<thread>
void Double(int num)
{
	num *= 2;
	printf("num * 2: %d\n", num);

};

void AddTwo(int num)
{
	num += 2;
	printf("num + 2:%d\n", num);
};

int main()
{
	int num = 3;
	//マルチスレッドの場合
	std::thread th1(Double, num);
	std::thread th2(AddTwo, num);

	th1.join();
	th2.join();

	return 0;
}