#include "Menu.h"
#include "SceneManager.h"
#include "InputManager.h"

Menu::Menu()
{
}

Menu::~Menu() {	Release();}

void Menu::Initialize()
{
}

void Menu::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_RETURN)
	{
		SceneManager::GetInstance()->SetScene(MENU);
	}
}

void Menu::Render()
{
}

void Menu::Release()
{
}
