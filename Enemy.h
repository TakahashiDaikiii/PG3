#include <cstdio>

class Enemy {
public:

    Enemy();
    // ��ԑJ�ڊ֐�
    void TransitionTo(void (Enemy::* newState)());

    // �X�V�֐�
    void Update();

private:
    //�ڋ�
    void Approach();

    //�ˌ�
    void Shoot();

    //���E
    void Withdraw();

    // �֐��e�[�u���̏�����
    void spFuncTable();

private:
    void (Enemy::* currentState)();
    void (Enemy::* stateFunctions[3])();  // �֐��e�[�u��
};