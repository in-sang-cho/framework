// framework v1.0

#include "Headers.h"
#include "MainUpdate.h"

class Singleton		// 싱글톤 클래스, 관리자
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

	ULONGLONG Time = GetTickCount64();	//	1/1000초 를 반환한다.

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

// ** 포인터
/*
	1. [*] 데이터, [&] 주소반환연산자
	2. 포인터 변수라면 묻지도 따지지도 말고 [동적할당(New)]
	3. 클래스&구조체는 [.]점 아니면 [->]화살표 로 호출하라
	
	4. [동적할당] 했다면 반드시 [할당해제(Delete)]
*/

// const 사용 시기
/*
	const -> 상수화 키워드
	어디서 어떻게 사용하든 크게 문제가 되지 않는다.
	사실 쓰지 않아도 상관은 없다. 하지만, 상수화시켜야 할 때가 있기 때문에 만들어 둔 것.
	(현업에서는 다른 사람에게 코딩 시 값 변경하지 말라 부탁하는 용도)
*/

// & 사용 시기
/*
	operator의 기능을 표현하기 위해 C++ (++ 연산자가 됨)
	이항 연산일 때의 & 연산은 비트 연산자(1이 있느냐 없느냐) A+B & C-D
	&& 연산자 = 논리 연산자(둘 다 참인가, 그렇지 않은가)	 A=0 && B!=0

	단항으로 쓰일 때는 변수 앞에 붙으면 주소 반환 연산자로 쓰인다.
	reference 연산자(참조 연산자)는 데이터 타입에 붙어야 된다.
	reference 연산자를 들고 올 때는 반드시 const가 붙는다21
*/

// 루프 도는 기준

// 턴제 게임과 실시간 전략 게임
/*
	실시간처럼 보이지만 결국에는 턴제일 수 밖에 없다.
	-> 실행되는 순서는 결정되어 있다.
*/

// ** GetTickCount 대략 49일
// ** GetTickCOunt64 대략 5억년

// ** 싱글톤 클래스(Singleton Class)
/*
	장소에 구애없이 막 갖다쓸 수 있도록 만들어져야한다
	관리자의 개념으로 사용할 것이다 (서버실)
*/

// 큰 범위 부터 만들고 세부 범위로 내려가는 것이다.