#include "MainUpdate.h"
#include "SceneManager.h"
#include "InputManager.h"
#include "CursorManager.h"

MainUpdate::MainUpdate() { }

MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	SceneManager::GetInstance()->SetScene(SCENEID::LOGO);
	CursorManager::GetInstance()->CreateBuffer(ConsoleWidthSize, ConsoleHeightSize);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();
	SceneManager::GetInstance()->Update();

	CursorManager::GetInstance()->FlippingBuffer();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{

}