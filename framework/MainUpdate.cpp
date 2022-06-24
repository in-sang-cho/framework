#include "MainUpdate.h"
#include "SceneManager.h"
#include "InputManager.h"

MainUpdate::MainUpdate() { }

MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	SceneManager::GetInstance()->SetScene(LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();

	/*
	DWORD dwKey = InputManager::GetInstance()->GetKey();
	if (dwKey & KYE_UP)
		cout << "KYE_UP" << endl;

	if (dwKey & KYE_DOWN)
		cout << "KYE_DOWN" << endl;

	if (dwKey & KYE_LEFT)
		cout << "KYE_LEFT" << endl;

	if (dwKey & KYE_RIGHT)
		cout << "KYE_RIGHT" << endl;

	if (dwKey & KYE_SPACE)
		cout << "KYE_SPACE" << endl;

	if (dwKey & KYE_ENTER)
	{
	SceneManager::GetInstance()->SetScene();

		if (SceneState > EXIT)
			SceneState = 0;
	}

	if (dwKey & KYE_CTRL)
		cout << "KYE_CTRL" << endl;

	if (dwKey & KYE_ALT)
		cout << "KYE_ALT" << endl;
	*/
}

void MainUpdate::Render()
{

}

void MainUpdate::Release()
{

}