#pragma once
#include "Headers.h"
#include <string>
#include <vector>
#include <map>
#include <list>
using namespace std;

/*
class Parent
{
private:
	// ** 자기 자신만 사용 가능
	int m_Number;
	string m_Str;

protected:
	// ** 상속간에 공개된 상태, 비상속 클래스 사용 불가, 외부 사용 불가

public:
	// ** 공개된 상

	void Update();
	void Initialize();
	void Output();

	// ** [virtual] = 가상함수
	// ** [= 0]은 virtual 함수에만 붙일 수 있다.
	// ** 함수의 끝에 [= 0]을 붙이게 되면 [순수 가상 함수]가 된다.
	 
	// ** [순수 가상 함수]
	// ** virtual 함수가 함수형 몸체(정의)가 없을 때 사용한다.\
	
	// ** virtual 함수를 사용하는 이유
	// ** virtual 함수 검색해부기
};

class AAA
{
private:

protected:
	string m_str = "AAA";
	int m_Number = 0;

public:
	void Output();

};

class BBB : public AAA
{
private:
	int m_Number = 100;

public:
	void Initialize() { m_str = "BBB"; }
	AAA::Output;
};

class CCC : public AAA
{
private:
	string m_Str;

public:
	void Initialize() { m_str = "CCC"; }
	AAA::Output;
};
*/