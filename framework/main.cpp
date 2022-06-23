// framework v1.0

#include "Headers.h"
#include "MainUpdate.h"

class Singleton		// �̱��� Ŭ����, ������
{
private:
	static Singleton* Instance;

public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton;

		return Instance;
	}

private:
	int Number;

public:
	int GetNumber() const { return Number; }
	void SetNumber(const int& _Number) { Number = _Number; }

private:
	Singleton() : Number(0) {};
public:
	~Singleton() {};
};

Singleton* Singleton::Instance;

int main(void)
{
	Singleton::GetInstance()->SetNumber(10);
	cout << Singleton::GetInstance()->GetNumber() << endl;
	/*
	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64();	//	1/1000�� �� ��ȯ�Ѵ�.

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
	*/

	return 0;
}

// ** ������
/*
	1. [*] ������, [&] �ּҹ�ȯ������
	2. ������ ������� ������ �������� ���� [�����Ҵ�(New)]
	3. Ŭ����&����ü�� [.]�� �ƴϸ� [->]ȭ��ǥ �� ȣ���϶�
	
	4. [�����Ҵ�] �ߴٸ� �ݵ�� [�Ҵ�����(Delete)]
*/

// const ��� �ñ�
/*
	const -> ���ȭ Ű����
	��� ��� ����ϵ� ũ�� ������ ���� �ʴ´�.
	��� ���� �ʾƵ� ����� ����. ������, ���ȭ���Ѿ� �� ���� �ֱ� ������ ����� �� ��.
	(���������� �ٸ� ������� �ڵ� �� �� �������� ���� ��Ź�ϴ� �뵵)
*/

// & ��� �ñ�
/*
	operator�� ����� ǥ���ϱ� ���� C++ (++ �����ڰ� ��)
	���� ������ ���� & ������ ��Ʈ ������(1�� �ִ��� ������) A+B & C-D
	&& ������ = �� ������(�� �� ���ΰ�, �׷��� ������)	 A=0 && B!=0

	�������� ���� ���� ���� �տ� ������ �ּ� ��ȯ �����ڷ� ���δ�.
	reference ������(���� ������)�� ������ Ÿ�Կ� �پ�� �ȴ�.
	reference �����ڸ� ��� �� ���� �ݵ�� const�� �ٴ´�21
*/

// ���� ���� ����

// ���� ���Ӱ� �ǽð� ���� ����
/*
	�ǽð�ó�� �������� �ᱹ���� ������ �� �ۿ� ����.
	-> ����Ǵ� ������ �����Ǿ� �ִ�.
*/

// ** GetTickCount �뷫 49��
// ** GetTickCOunt64 �뷫 5���

// ** �̱��� Ŭ����(Singleton Class)
/*
	��ҿ� ���־��� �� ���پ� �� �ֵ��� ����������Ѵ�
	�������� �������� ����� ���̴� (������)
*/

// ū ���� ���� ����� ���� ������ �������� ���̴�.