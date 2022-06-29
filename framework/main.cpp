// ** Framework v5.2
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
		if (Time + 150 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}

	return 0;
}


// ���� ����: �ʿ��ؼ� ��� �ϴ� ����
/*
	main �ۼ��ϴٺ��� mainupdate �������ϰ�
	scene �ۼ��ϴϱ� scenemanager �������ϰ�
	scene ��������� ���� scene�� �����
	scene �Ѱܾ��ϴϱ� input �������ϰ�
*/