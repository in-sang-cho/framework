// ** Framework v11.0
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	system("title ����! ����! ����! ��ǳ�� �ߴ�!");
	system("mode con cols=120, lines=30");

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


// ���� ���� (Double Buffer)
/*
	���� ����(Front Buffer)
	�ĸ� ����(Back Buffer)
*/

/*

class AAA
{
public:
	int Number;
	static int Num;

};
class BBB : public AAA
{

};
class CCC : public AAA
{

};

int main()
{
		
	BBB b;
	b.Number = 10;
	b.Num = 100;

	CCC c;
	c.Number = 100;
	c.Num = 1000;

	cout << b.Number << endl;
	cout << c.Number << endl;

	cout << b.Num << endl;
	cout << c.Num << endl;

	// ������ ������ ���̴� �ּ� ������ ����
	// ����: �ּҰ� �ٲ�, ����: �ּҰ� �ٲ��� ����.

}
*/

// �Ծ࿡ �°� �ڵ带 �ۼ��ؾ� �Ѵ�
// ȿ������ ����ȭ ���ȭ, ������, ������, �߻� ����...
// static�� ��������, ���� ���� �� ������ �ð��� �������.
// static�� �ּҰ� ����ȭ�Ǳ� ������ 
// �ڵ� �� ���� ������ �� ���� ȿ�����ΰ�, ������ ���°�