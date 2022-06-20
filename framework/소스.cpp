// ** framework v0.1

#include <iostream>

using namespace std;

void Initialize(int& _number);

struct AAA
{
	int m_inumber;
};

class BBB
{
private:
	int m_inumber;

public:
	void Initialize() { m_inumber = 0; }
	// ** 데이터를 사용하는 것은 가능하지만, 수정은 할 수 없다.
	int GetNumber() { return m_inumber; }

	// ** 데이터를 수정할 수는 있지만, 참조는 할 수 없다.
	void SetNumber(int _number) { m_inumber = _number; }
	
	// ** 모듈화의 한 부분.
};

class CCC
{
private:
	int m_inumber;

public:
	void Initialize() { m_inumber = 100; }
	// ** 데이터를 사용하는 것은 가능하지만, 수정은 할 수 없다.
	int GetNumber() { return m_inumber; }

	// ** 데이터를 수정할 수는 있지만, 참조는 할 수 없다.
	void SetNumber(int _number) { m_inumber = _number; }

	// ** 모듈화의 한 부분.
};


int main()
{
	AAA a;
	Initialize(a.m_inumber);

	BBB b;

	cout << b.GetNumber() << endl;
	// b.Number 를 곧바로 사용할 수는 없다.
	b.SetNumber(10);
	b.Initialize();

	CCC c;

	c.SetNumber(10);
	c.Initialize();

	cout << b.GetNumber() << endl;
	cout << c.GetNumber() << endl;
	return 0;
}

void Initialize(int& _number)
{
	_number = 0;
}

// c++의 5가지 특징
/*
	1. 정보은닉
		구조체(Struct)는 public으로만 쓸 수 있지만, Class는 private(비공개)로 사용할 수 있다.
		다르게 이야기하자면, 구조체는 누구나 쓸 수 있지만, Class는 내가 정보를 보호하거나 숨길 수 있다.
	2. 캡슐화
		여러 개의 객체를 하나의 함수로 사용한다 라는 건 함수의 기능이 변하고, 다른 사람들 또한 마구잡이로 쓰는 것이 가능하다.
		이 말은, 하나의 함수가 변하면 함수를 사용하는 다른 곳의 기능들이 변할 가능성이 생긴다.
		캡슐화는 내 기능은 나만 사용하게끔 할 수 있다. 
	3. 추상화
		추상은 실존하지 않는 무언가를 이야기한다.
		그룹으로 봤을 때는 얼추 이해가 가능하지만,
		세부적으로 들어갔을 때 어떤 객체 하나를 특정짓지 않는다. (포괄적 의미)
	4. 상속
		진짜 말 그대로 상속.
		public: 공개
		private: 비공개
		protected: 부모 자식 클래스 끼리만 일부 공개
	5. 다형성
		형태는 얼마든지 다를 수 있다. 그러나, 그룹에 포함된다면 누구나 그 그룹이 되는 것이 가능하다.
		그룹의 형태로만 있다면, 얼마든지 달라도 상관없다.
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

