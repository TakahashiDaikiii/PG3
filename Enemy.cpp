#include "Enemy.h"
#include <Windows.h>
#include <stdio.h>


void (Enemy::* Enemy::fhaseTable[])() = {
	&Enemy::Approach, 
	&Enemy::Shooting,
	&Enemy::Leave
};


void Enemy::Update()
{

	(this->*fhaseTable[static_cast<size_t>(phase_)])();

}

void Enemy::Approach()
{
	printf("接近\n");

	Sleep(3 * 1000);

	phase_ = Phase::SHOOTING;

}

void Enemy::Shooting()
{
	printf("射撃\n");

	Sleep(3 * 1000);

	phase_ = Phase::LEAVE;

}

void Enemy::Leave()
{
	printf("離脱\n");

	count = true;

}