#pragma once

#include "Headers.h"
#include "Object.h"

class CollisionManager
{
public:
	static bool Collision(const Object* _ObjA, const Object* _ObjB)
	{
		// Position ¹Þ¾Æ¿È
		Vector3 Position_A = _ObjA->GetPosition();
		Vector3 Position_B = _ObjB->GetPosition();

		// Scale ¹Þ¾Æ¿È
		Vector3 Scale_A = _ObjA->GetScale();
		Vector3 Scale_B = _ObjA->GetScale();

		/*
		*/
		if (Position_A.x + (Scale_A.x * 0.5f) > Position_B.x &&
			Position_B.x + (Scale_B.x * 0.5f) > Position_A.x &&
			Position_A.y == Position_B.y)
			return true;



		// ¾Æ´Ï¶ó¸é
		return false;
	}
};