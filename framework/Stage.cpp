#include "Stage.h"
#include "SceneManager.h"
#include "InputManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Initialize()
{
}

void Stage::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_RETURN)
	{
		SceneManager::GetInstance()->SetScene(STAGE);
	}
}

void Stage::Render()
{
}

void Stage::Release()
{
}
