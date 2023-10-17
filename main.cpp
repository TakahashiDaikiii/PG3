#include <stdio.h>

int Recursive(int h, int j, int m) 
{

    if (h <= 0) {
        
        return j;
    }

    return Recursive(h - 1, j += m, m * 2 - 50);

}

int main() {
    int hour = 6;

    int money = 100;

    int total = 0;

    int normal = 1072;

    int result;

    result = Recursive(hour, total, money);

    printf("%dŽžŠÔ“­‚¢‚½ˆê”Ê’À‹à‘ÌŒn %d F Ä‹A“I‚È’À‹à‘ÌŒn %d",hour, normal * hour, result);

    return 0;
}