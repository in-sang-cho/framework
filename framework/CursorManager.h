#pragma once
#include "Headers.h"

class CursorManager
{
public:
	static void SetCursorPosition(float _x, float _y)
		//	Ŀ���� ��ġ�� �ٲ��ִ� �Լ�
	{
		COORD Pos = { (SHORT)_x, (SHORT)_y };
		SetConsoleCursorPosition(
			GetStdHandle(STD_OUTPUT_HANDLE), Pos);
			// ǥ�� �ܼ� â ��ġ�� Pos�� �ٲ��
	}

	static void Draw(float _x, float _y, string _str)
		//	Ŀ���� ��ġ�� �ٲ��ִ� �Լ�
	{
		SetCursorPosition(_x, _y);
		cout << _str;
	}
};

