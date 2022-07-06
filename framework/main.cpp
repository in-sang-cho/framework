// ** Framework v11.0
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	system("title 나는! 나는! 나는! 장풍을 했다!");
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


// 더블 버퍼 (Double Buffer)
/*
	전면 버퍼(Front Buffer)
	후면 버퍼(Back Buffer)
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

	// 동적과 정적의 차이는 주소 변경의 유무
	// 동적: 주소가 바뀜, 정적: 주소가 바뀌지 않음.

}
*/

// 규약에 맞게 코드를 작성해야 한다
// 효율성과 최적화 모듈화, 가독성, 다형헝, 추상성 등등등...
// static이 많아지면, 게임 시작 전 전굽는 시간이 길어진다.
// static은 주소가 정적화되기 때문에 
// 코드 한 줄을 적었을 때 과연 효율적인가, 문제는 없는가