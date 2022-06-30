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


// 적는 순서: 필요해서 써야 하는 순서
/*
	main 작성하다보니 mainupdate 만들어야하고
	scene 작성하니까 scenemanager 만들어야하고
	scene 만들었으니 여러 scene들 만들고
	scene 넘겨야하니까 input 만들어야하고
*/

// Template (템플릿)
/*
	자료형을 보내주는 매개변수
	데이터 타입을 넘겨주는 역할을 한다.
	사용할 때는 [이름의 끝]에 쓰고 괄호가 뒤에 붙는다.
	함수에 썼으면 함수의 이름 끝에 붙이고, 클래스에 썼으면 클래스 이름 끝에 붙인다.
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