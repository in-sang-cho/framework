// framework v0.2

#include "Headers.h"
#include "Class1.h"

const int id_Child = 0;
const int id_Bullet = 1;

int main()
{
	Parent* p[2];

	p[id_Child] = new Child;
	p[id_Bullet] = new Bullet;

	for (int i = 0; i < 2; i++)
		p[i]->Initialize();

	while(true)
	{
		system("cls");
		for (int i = 0; i < 2; i++)
			p[i]->Update();

		for (int i = 0; i < 2; i++)
			p[i]->Output();
	}
	

	return 0;
}

// c++의 5가지 특징
/*4
	1. 정보은닉
		public: 공개
		private: 비공개
		protected: 부모 자식 클래스 끼리만 일부 공개
	2. 캡슐화
		데이터와 기능(함수)을 묶음으로 사용하는 것 
	3. 추상화
		존재하지 않는 형태의 함수만 모인 클래스를 추상 클래스라고 한다.
		ex) 대명사들(그거, 저거, 학생, 군인, 노인 등), 대상이 특정되지 않는 경우
		ex) 홍길동은 학생이다 -> 홍길동이라는 특정 대상이 있는 객체이므로 추상의 형태로 볼 수 있음.
		
	4. 상속
		진짜 말 그대로 상속.
	5. 다형성
		내가 편하기 위해 사용하는데 형태는 하나다. 그걸 벗어날 수는 없는데, 그걸 마치 그 형태가 다른 것인 것처럼 쓸 수 있다.
		본판은 부모지만, 마치 자식인 것 처럼 쓸 수 있다.
	6. namespace
		별도의 영역을 지정하여 동일한 이름의 함수를 사용할 수 있도록 함
	7. 생성자, 소멸자, 복사생성자
	8. 깊은 복사, 앝은 복사
	9. 오버로딩, 오버라이딩
	10. 연산자 오버로딩
	11. 포인터(복습)
	12. 
		
*/

// object의 개념
/*
	물건 하나 = 객체
	class = 집합
	프로그램은 하나부터 열까지 수학이다.
	객체가 모여서 하나의 객체가 되고, 그 객체들이 모여서 하나의 객체가 될 수 있다.
	무엇이든 하나의 객체가 될 수 있다.
	모든 객체는 class로 만들어져 있다.
	하지만 모든 class가 객체는 아니다. (추상 class가 있기 때문)
	class는 설명서, 그 자체는 아니다.
*/

/*
namespace AAA
{
	void Output()
	{
		cout << "홍길동" << endl;
	}
}

using AAA::Output;

namespace BBB
{
	void Output()
	{
		cout << "임꺽정" << endl;
	}
}

using namespace BBB;
*/

// 런타임 이후에는 stack과 heap이 올라간다
// 런타임 이전에 static이 올라간다(전방)

// 생성자 & 소멸자 & 

/*
Parent* p[16];

const int id_Child = 0;
const int id_Bullet = 1;

p[id_Child] = new Child;
p[id_Bullet] = new Child;

Child c;

for (int i = 0; i < 2; i++)
{
	p[i]->Initialize();
	p[i]->Output();
}

return 0;
*/