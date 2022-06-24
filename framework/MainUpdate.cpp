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
	*/
}

void MainUpdate::Render()
{

}

void MainUpdate::Release()
{

}