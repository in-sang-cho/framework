#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

Logo::Logo() : Scene("") { }

Logo::~Logo() { }

void Logo::Initialize()
{
	str = "Logo";
}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey& KYE_RETURN)
	{
		SceneManager::GetInstance()->SetScene(LOGO);
	}
}

void Logo::Render()
{
	cout << str << endl;
}

void Logo::Release()
{

}
