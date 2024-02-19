#include"Phase.h"
class Enemy
{
public:

	/// <summary>
	/// XV
	/// </summary>
	void Update();


	bool GetCount() { return count; }

private:


	void Approach();

	void Shooting();

	void Leave();



private:

	static void (Enemy::* fhaseTable[])();

	Phase phase_ = Phase::APPROACH;

	bool count = false;

};