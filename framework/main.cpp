// framework v0.3

#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "Class1.h"
#include <string>
#include <vector>
#include <map>
#include <list>

struct tagInfo
{
	int Number;

	tagInfo() { };
	~tagInfo() { };
};

// 생성자, 소멸자, 복사생성자
// 깊은복사, 얕은복사
/* 

class Object
{
	
};

int main()
{
}
*/

// 오버로딩, 오버라이딩
/*
	함수 내에서 똑같은 이름을 쓸 수 있는 3가지 방법
	namespace::
	오버로딩: 전달값의 갯수와 자료형에 따라서 선택적(자동)으로 호출되는 함수(복사생성자와 같다) 본인 클래스 내에서만 사용 가능
	오버라이딩: 함수 이름과 전달값의 갯수, 자료형마저 완벽하게 일치하는 함수지만, 범위가 가족 함수로 넓다.
	두 개가 전혀 다른 기능이므로 동시에 사용이 가능하다. 
	결국은 어떻게 사용하고 호출할 것인가가 핵심이다.

class Object
{
public:
	virtual void Output()					────────────┬────────────────────────┐
	{													│						 │
		cout << "" << endl;								│						 │
	}													│						 │
										overloading		│						 │
	virtual void Output(string _Obj)					│						 │
	{													│						 │
		cout << "" << endl;								│						 │
	}										────────────┘					     │
}																			     │
															overriding		     │
class AAA : public Object													     │
{																			     │
public:																		     │
	void Output() override					────────────┐					     │
	{													│						 │
		cout << "" << endl;								│						 │
	}													│						 │
										overloading		│						 │
	void Output(string _Obj) override					│						 │
	{													│						 │
		cout << "" << endl;								│						 │
	}										────────────┴────────────────────────┘
}
*/

// 연산자 오버로딩
/*
	
*/



class Object
{
private:
	int Number;
	tagInfo Info;

public:
	Object& operator=(const Object& _Obj)		//	operator= <- 기능을 하나 더 만들어보겠다
	{
		Info.Number += _Obj.Info.Number;
		return *this;
	}

	Object& operator++()
	{
		Info.Number += 1;
		return *this;
	}

	void Output()
	{
		cout << Number << endl;
	}

public:
	Object() { };
	Object(int _Number) : Number{ _Number } { };
	~Object() { };
};
/*
class Object
{
private:
	
public:
	int Number = 0;
	char Name = 'a';

public:
	virtual Object* Clone() = 0;




public:
	// ** 사용자가 호출하지 않아도 스스로 호출된다
	// ** 클래스가 생성된 직후 호출
	Object()    // <- 생성자
	{
		cout << "생성자" << endl;
	};
	
	// ** 사용자가 호출하는 시점에 호출된다
	// ** 전달값의 갯수와 자료형에 따라서 선택적(자동)으로 호출됨
	Object(int _Number) : Number(_Number)	// <- 복사 생성자─┐
	{										//				 │
		cout << "복사 생성자 int" << endl;	//				 │
											//				 ↓
		//Number = _Number;					// 깊은 복사의 도입부

	};

	/*
	Object(float _Number)    // <- 복사 생성자
	{
		cout << "복사 생성자 float" << endl;

		Number = (int)_Number;
	};
	Object(char _Name)
	{
		cout << "복사 생성자" << endl;

		Name = _Name;
	};

	Object(tagInfo _Info)
	{

	}

};

class AAA : public Object
{
protected:
	tagInfo m_Info;

public:
	virtual Object* Clone() override { return new AAA(*this); }

	void Output() { cout << m_Info.Number << endl; }

public:
	AAA() {	};
	AAA(tagInfo _Info) : Object(_Info) { };
	~AAA() { };
};

map<string, Object*> PrototypeObject;

Object* GetObject(string _str)
{
	map<string, Object*>::iterator iter = PrototypeObject.find(_str);
	if (iter == PrototypeObject.end())
		return nullptr;
	else
		return iter->second;

	return nullptr;
}
*/

int main(void)
{
	Object o1(10);
	Object o2(o1);

	o2 = o1;

	++o2;

	return 0;
}

// c++의 5가지 특징
/*4
	1. 정보은닉
	2. 캡슐화
	3. 추상화
	4. 상속
	5. 다형성
	6. namespace
	7. 생성자, 소멸자, 복사생성자
	8. 깊은 복사, 앝은 복사
	9. 오버로딩, 오버라이딩
	10. 연산자 오버로딩
	11. 포인터(복습)
	12. 
*/