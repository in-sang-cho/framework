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

// ������, �Ҹ���, ���������
// ��������, ��������
/* 

class Object
{
	
};

int main()
{
}
*/

// �����ε�, �������̵�
/*
	�Լ� ������ �Ȱ��� �̸��� �� �� �ִ� 3���� ���
	namespace::
	�����ε�: ���ް��� ������ �ڷ����� ���� ������(�ڵ�)���� ȣ��Ǵ� �Լ�(��������ڿ� ����) ���� Ŭ���� �������� ��� ����
	�������̵�: �Լ� �̸��� ���ް��� ����, �ڷ������� �Ϻ��ϰ� ��ġ�ϴ� �Լ�����, ������ ���� �Լ��� �д�.
	�� ���� ���� �ٸ� ����̹Ƿ� ���ÿ� ����� �����ϴ�. 
	�ᱹ�� ��� ����ϰ� ȣ���� ���ΰ��� �ٽ��̴�.

class Object
{
public:
	virtual void Output()					����������������������������������������������������������������������������
	{													��						 ��
		cout << "" << endl;								��						 ��
	}													��						 ��
										overloading		��						 ��
	virtual void Output(string _Obj)					��						 ��
	{													��						 ��
		cout << "" << endl;								��						 ��
	}										��������������������������					     ��
}																			     ��
															overriding		     ��
class AAA : public Object													     ��
{																			     ��
public:																		     ��
	void Output() override					��������������������������					     ��
	{													��						 ��
		cout << "" << endl;								��						 ��
	}													��						 ��
										overloading		��						 ��
	void Output(string _Obj) override					��						 ��
	{													��						 ��
		cout << "" << endl;								��						 ��
	}										����������������������������������������������������������������������������
}
*/

// ������ �����ε�
/*
	
*/



class Object
{
private:
	int Number;
	tagInfo Info;

public:
	Object& operator=(const Object& _Obj)		//	operator= <- ����� �ϳ� �� �����ڴ�
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
	// ** ����ڰ� ȣ������ �ʾƵ� ������ ȣ��ȴ�
	// ** Ŭ������ ������ ���� ȣ��
	Object()    // <- ������
	{
		cout << "������" << endl;
	};
	
	// ** ����ڰ� ȣ���ϴ� ������ ȣ��ȴ�
	// ** ���ް��� ������ �ڷ����� ���� ������(�ڵ�)���� ȣ���
	Object(int _Number) : Number(_Number)	// <- ���� �����ڦ���
	{										//				 ��
		cout << "���� ������ int" << endl;	//				 ��
											//				 ��
		//Number = _Number;					// ���� ������ ���Ժ�

	};

	/*
	Object(float _Number)    // <- ���� ������
	{
		cout << "���� ������ float" << endl;

		Number = (int)_Number;
	};
	Object(char _Name)
	{
		cout << "���� ������" << endl;

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

// c++�� 5���� Ư¡
/*4
	1. ��������
	2. ĸ��ȭ
	3. �߻�ȭ
	4. ���
	5. ������
	6. namespace
	7. ������, �Ҹ���, ���������
	8. ���� ����, ���� ����
	9. �����ε�, �������̵�
	10. ������ �����ε�
	11. ������(����)
	12. 
*/