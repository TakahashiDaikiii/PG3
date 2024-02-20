#include <iostream>
#include <string>
#include <chrono>
#include <Windows.h>

int main(void) 
{

    std::string a(100000, 'a');

    {
        auto start = std::chrono::steady_clock::now();
        std::string copy = a;
        auto end = std::chrono::steady_clock::now();

        auto duration = end - start;
        std::cout << "�R�s�[�ɂ�����������: " << duration.count() << " �}�C�N���b" << std::endl;
    }

    {
        auto start = std::chrono::steady_clock::now();
        std::string move = std::move(a);
        auto end = std::chrono::steady_clock::now();

        auto duration = end - start;
        std::cout << "�ړ��ɂ�����������: " << duration.count() << " �}�C�N���b" << std::endl;
    }


    getchar();

    return 0;
}