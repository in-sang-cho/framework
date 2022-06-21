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

// c++�� 5���� Ư¡
/*4
	1. ��������
		public: ����
		private: �����
		protected: �θ� �ڽ� Ŭ���� ������ �Ϻ� ����
	2. ĸ��ȭ
		�����Ϳ� ���(�Լ�)�� �������� ����ϴ� �� 
	3. �߻�ȭ
		�������� �ʴ� ������ �Լ��� ���� Ŭ������ �߻� Ŭ������� �Ѵ�.
		ex) �����(�װ�, ����, �л�, ����, ���� ��), ����� Ư������ �ʴ� ���
		ex) ȫ�浿�� �л��̴� -> ȫ�浿�̶�� Ư�� ����� �ִ� ��ü�̹Ƿ� �߻��� ���·� �� �� ����.
		
	4. ���
		��¥ �� �״�� ���.
	5. ������
		���� ���ϱ� ���� ����ϴµ� ���´� �ϳ���. �װ� ��� ���� ���µ�, �װ� ��ġ �� ���°� �ٸ� ���� ��ó�� �� �� �ִ�.
		������ �θ�����, ��ġ �ڽ��� �� ó�� �� �� �ִ�.
	6. namespace
		������ ������ �����Ͽ� ������ �̸��� �Լ��� ����� �� �ֵ��� ��
	7. ������, �Ҹ���, ���������
	8. ���� ����, ���� ����
	9. �����ε�, �������̵�
	10. ������ �����ε�
	11. ������(����)
	12. 
		
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

/*
namespace AAA
{
	void Output()
	{
		cout << "ȫ�浿" << endl;
	}
}

using AAA::Output;

namespace BBB
{
	void Output()
	{
		cout << "�Ӳ���" << endl;
	}
}

using namespace BBB;
*/

// ��Ÿ�� ���Ŀ��� stack�� heap�� �ö󰣴�
// ��Ÿ�� ������ static�� �ö󰣴�(����)

// ������ & �Ҹ��� & 

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