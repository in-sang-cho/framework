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
	// ** �����͸� ����ϴ� ���� ����������, ������ �� �� ����.
	int GetNumber() { return m_inumber; }

	// ** �����͸� ������ ���� ������, ������ �� �� ����.
	void SetNumber(int _number) { m_inumber = _number; }
	
	// ** ���ȭ�� �� �κ�.
};

class CCC
{
private:
	int m_inumber;

public:
	void Initialize() { m_inumber = 100; }
	// ** �����͸� ����ϴ� ���� ����������, ������ �� �� ����.
	int GetNumber() { return m_inumber; }

	// ** �����͸� ������ ���� ������, ������ �� �� ����.
	void SetNumber(int _number) { m_inumber = _number; }

	// ** ���ȭ�� �� �κ�.
};


int main()
{
	AAA a;
	Initialize(a.m_inumber);

	BBB b;

	cout << b.GetNumber() << endl;
	// b.Number �� ��ٷ� ����� ���� ����.
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

// c++�� 5���� Ư¡
/*
	1. ��������
		����ü(Struct)�� public���θ� �� �� ������, Class�� private(�����)�� ����� �� �ִ�.
		�ٸ��� �̾߱����ڸ�, ����ü�� ������ �� �� ������, Class�� ���� ������ ��ȣ�ϰų� ���� �� �ִ�.
	2. ĸ��ȭ
		���� ���� ��ü�� �ϳ��� �Լ��� ����Ѵ� ��� �� �Լ��� ����� ���ϰ�, �ٸ� ����� ���� �������̷� ���� ���� �����ϴ�.
		�� ����, �ϳ��� �Լ��� ���ϸ� �Լ��� ����ϴ� �ٸ� ���� ��ɵ��� ���� ���ɼ��� �����.
		ĸ��ȭ�� �� ����� ���� ����ϰԲ� �� �� �ִ�. 
	3. �߻�ȭ
		�߻��� �������� �ʴ� ���𰡸� �̾߱��Ѵ�.
		�׷����� ���� ���� ���� ���ذ� ����������,
		���������� ���� �� � ��ü �ϳ��� Ư������ �ʴ´�. (������ �ǹ�)
	4. ���
		��¥ �� �״�� ���.
		public: ����
		private: �����
		protected: �θ� �ڽ� Ŭ���� ������ �Ϻ� ����
	5. ������
		���´� �󸶵��� �ٸ� �� �ִ�. �׷���, �׷쿡 ���Եȴٸ� ������ �� �׷��� �Ǵ� ���� �����ϴ�.
		�׷��� ���·θ� �ִٸ�, �󸶵��� �޶� �������.
*/

// object�� ����
/*
	���� �ϳ� = ��ü
	class = ����
	���α׷��� �ϳ����� ������ �����̴�.
	��ü�� �𿩼� �ϳ��� ��ü�� �ǰ�, �� ��ü���� �𿩼� �ϳ��� ��ü�� �� �� �ִ�.
	�����̵� �ϳ��� ��ü�� �� �� �ִ�.
	��� ��ü�� class�� ������� �ִ�.
	������ ��� class�� ��ü�� �ƴϴ�. (�߻� class�� �ֱ� ����)
	class�� ����, �� ��ü�� �ƴϴ�.
*/

