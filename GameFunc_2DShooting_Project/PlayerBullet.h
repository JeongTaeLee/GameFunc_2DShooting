#pragma once
#include "Bullet.h"
class PlayerBullet :
	public Bullet
{
public:
	PlayerBullet();
	virtual ~PlayerBullet();

	virtual void Init()	override;
	virtual void OnCollision(Collider * lpCollider) override;
};

