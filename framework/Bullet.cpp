#include "Bullet.h"
#include "CursorManager.h"
#include "MathManager.h"

Bullet::Bullet() { }
Bullet::Bullet(Transform _TransInfo) : Object(_TransInfo) { }
Bullet::~Bullet() { }


void Bullet::Initialize()
{
	strKey = "Bullet";

	Buffer[0] = (char*)"??";
	Buffer[1] = (char*)"??";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3((float)strlen(Buffer[0]), (float)MAX_SIZE);

	TransInfo.Direction = Vector3(0.0f, 0.0f);
}

int Bullet::Update()
{
	TransInfo.Direction = MathManager::GetDirection(
		TransInfo.Position, Vector3(60.0f, 15.0f));

	TransInfo.Position += TransInfo.Direction;



	return 0;
}

void Bullet::Render()
{
	for (int i = 0; i < 2; ++i)
	{
		CursorManager::GetInstance()->WriteBuffer(TransInfo.Position.x,
			TransInfo.Position.y + i, Buffer[i], Color);
	}
}

void Bullet::Release()
{

}