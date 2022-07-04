#include "MainUpdate.h"
#include "SceneManager.h"
#include "InputManager.h"
#include "CursorManager.h"

MainUpdate::MainUpdate() { }

MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	CursorManager::GetInstance()->CreateBuffer(ConsoleWidthSize, ConsoleHeightSize);

	SceneManager::GetInstance()->SetScene(SCENEID::LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();
	SceneManager::GetInstance()->Update();

	CursorManager::GetInstance()->FilppingBuffer();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{

}