#pragma once

class SphereCollider : public Collider
{
private:
	float radius;

	UINT stackCount;
	UINT sliceCount;

public:
	SphereCollider(float radius = 1.0f, UINT stackCount = 20, UINT sliceCount = 20);
	~SphereCollider();
		
	virtual bool IsCollision(Collider* collider) override;
	virtual void CollisionPush(Collider* collider) override;
	virtual bool IsCollision(IN Ray ray, OUT float* distance = nullptr, OUT Vector3* contact = nullptr) override;

	//void IsBoxCollisionPush(BoxCollider* collider);
	bool IsBoxCollision(BoxCollider* collider);
	bool IsSphereCollision(SphereCollider* collider);
	void IsBoxCollisionPush(BoxCollider* collider);
	void IsSphereCollisionPush(SphereCollider* collider);
};