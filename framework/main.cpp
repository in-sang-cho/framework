// ** Framework v10.0
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	system("title 케인인님 한판해요");

	system("mode con cols=120, lines=30");


	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64();

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

	return 0;
}


// 더블 버퍼 (Double Buffer)
/*
	전면 버퍼(Front Buffer)
	후면 버퍼(Back Buffer)
*/