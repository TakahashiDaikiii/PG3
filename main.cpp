#include <stdio.h>


template <typename T1, typename T2>
class MinFinder 
{
public:
    // 2�̈������ׁA�������l��Ԃ�
    auto Min(T1 a, T2 b) -> decltype(a < b ? a : b) {
        return (a < b) ? a : b;
    }
};


int main() {
    // float�^�̑g�ݍ��킹
    MinFinder<float, float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.25f, 2.45f);
    printf("Min: 3.25 or 2.45 <float>: %f\n", floatResult);

    // double�^�̑g�ݍ��킹
    MinFinder<double, double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(14.5, 8.2);
    printf("Min: 14.5 or 8.2 <double>: %lf\n", doubleResult);

    // int�^��double�^
    MinFinder<int, double> intDoubleMinFinder;
    int intDoubleResult = intDoubleMinFinder.Min(6, 7.9);
    printf("Min: 6 or 7.9 <int>: %d\n", intDoubleResult);

    // int�^��float�^
    MinFinder<int, float> intFloatMinFinder;
    int intFloatResult = intFloatMinFinder.Min(6, 2.45f);
    printf("Min: 6 or 2.45 <int>: %d\n", intFloatResult);

    // float�^��double�^
    MinFinder<float, double> floatDoubleMinFinder;
    float floatDoubleResult = floatDoubleMinFinder.Min(3.25f, 7.9);
    printf("Min: 3.25 or 7.9 <float>: %f\n", floatDoubleResult);

    return 0;
}