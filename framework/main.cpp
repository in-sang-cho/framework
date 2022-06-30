// ** Framework v6.2
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{

	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64();

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}

	return 0;
}


// ���� ����: �ʿ��ؼ� ��� �ϴ� ����
/*
	main �ۼ��ϴٺ��� mainupdate �������ϰ�
	scene �ۼ��ϴϱ� scenemanager �������ϰ�
	scene ��������� ���� scene�� �����
	scene �Ѱܾ��ϴϱ� input �������ϰ�
*/

// Template (���ø�)
/*
	�ڷ����� �����ִ� �Ű�����
	������ Ÿ���� �Ѱ��ִ� ������ �Ѵ�.
	����� ���� [�̸��� ��]�� ���� ��ȣ�� �ڿ� �ٴ´�.
	�Լ��� ������ �Լ��� �̸� ���� ���̰�, Ŭ������ ������ Ŭ���� �̸� ���� ���δ�.
*/

/*
template <typename T1, typename T2>
class Temp
{
public:
	static T* Func() return new T1;
	static T* Func(int i) return new T1(i);
	static T* Func(float f) return new T1(f);
};

class A
{
public:
	int Number;
};

class B
{
public:
	float Number;

};

int main(void)
{
	A* a = Temp<A, B>::Func();

	a->Number = 10;

	return 0;
}
*/