#include "MainUpdate.h"
#include "InputManager.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
	Release();
}

void MainUpdate::Initialize()
{
	/*
	SceneState = LOGO;
	SceneManager::GetInstance()->SetScene(SceneState);
	*/
}

void MainUpdate::Update()
{
	/*
	++count;

	if (count > 30)
	{
		count = 0;
		
		SceneState;
		SceneManager::GetInstance()->SetScene(SceneState);
		

	}
	*/

	InputManager().GetInstance()->InputKey();
}

void MainUpdate::Render()
{
}

void MainUpdate::Release()
{
}
