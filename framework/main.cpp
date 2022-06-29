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


// 적는 순서: 필요해서 써야 하는 순서
/*
	main 작성하다보니 mainupdate 만들어야하고
	scene 작성하니까 scenemanager 만들어야하고
	scene 만들었으니 여러 scene들 만들고
	scene 넘겨야하니까 input 만들어야하고
*/