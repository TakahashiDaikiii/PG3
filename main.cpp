#include "Enemy.h"

int main() {
    Enemy enemy;

    // �V�[���̍X�V�𐔉�J��Ԃ���
    for (int i = 0; i < 3; ++i) {
        enemy.Update();
    }

    return 0;
}