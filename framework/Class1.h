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
	// ** �ڱ� �ڽŸ� ��� ����
	int m_Number;
	string m_Str;

protected:
	// ** ��Ӱ��� ������ ����, ���� Ŭ���� ��� �Ұ�, �ܺ� ��� �Ұ�

public:
	// ** ������ ��

	void Update();
	void Initialize();
	void Output();

	// ** [virtual] = �����Լ�
	// ** [= 0]�� virtual �Լ����� ���� �� �ִ�.
	// ** �Լ��� ���� [= 0]�� ���̰� �Ǹ� [���� ���� �Լ�]�� �ȴ�.
	 
	// ** [���� ���� �Լ�]
	// ** virtual �Լ��� �Լ��� ��ü(����)�� ���� �� ����Ѵ�.\
	
	// ** virtual �Լ��� ����ϴ� ����
	// ** virtual �Լ� �˻��غα�
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