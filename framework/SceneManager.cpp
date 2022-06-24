#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::Instance = nullptr;

SceneManager::SceneManager() : SceneState(nullptr) { }	// ������ ����Ǿ��ٸ� �ʱ�ȭ�� ���� ���ִ� ���� ����
SceneManager::~SceneManager() { Release(); }

void SceneManager::SetScene(SCENEID _SceneState)
{
	if (SceneState != nullptr)
		::Safe_Delete(SceneState);		// �ζ��� �Լ��� �տ� ::�� ���δ�

	switch (_SceneState)
	{
	case SCENEID::LOGO:
		SceneState = new Logo;
		break;

	case SCENEID::MENU:
		SceneState = new Menu;
		break;

	case SCENEID::STAGE:
		SceneState = new Stage;
		break;

	case SCENEID::EXIT:
		exit(NULL);
		break;
	}
	SceneState->Initialize();

	Sleep(500);
}

void SceneManager::Update()
{
	SceneState->Update();
}

void SceneManager::Render()
{
	SceneState->Render();
}

void SceneManager::Release()
{
	::Safe_Delete(SceneState);
}
