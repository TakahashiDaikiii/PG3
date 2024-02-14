#include "Enemy.h"

// Constructor
Enemy::Enemy() 
{
    // ������Ԃ�ݒ�
    currentState = &Enemy::Approach;
}
// ��ԑJ�ڊ֐�
void Enemy::TransitionTo(void (Enemy::* newState)()) {
    currentState = newState;
}

// �X�V�֐�
void Enemy::Update() {
    (this->*currentState)();
}

//�ڋ�
void Enemy::Approach() {
    printf("�ڋ�\n");
    TransitionTo(&Enemy::Shoot);
}

//�ˌ�
void Enemy::Shoot() {
    printf("�ˌ�\n");
    TransitionTo(&Enemy::Withdraw);
}

//���E
void Enemy::Withdraw() {
    printf("���E\n");

    TransitionTo(&Enemy::Approach);
}

// �֐��e�[�u���̏�����
void Enemy::spFuncTable() {
    stateFunctions[0] = &Enemy::Approach;
    stateFunctions[1] = &Enemy::Shoot;
    stateFunctions[2] = &Enemy::Withdraw;
}