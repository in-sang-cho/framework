#include "SceneManager.h"

void SceneManager::SetScene(SCENEID _SceneState)
{
	switch (_SceneState)
	{
	case LOGO:
		cout << "LOGO" << endl;
		break;

	case MENU:
		cout << "MENU" << endl;

		break;

	case STAGE:
		cout << "STAGE" << endl;

		break;

	case EXIT:
		cout << "EXIT" << endl;

		break;
	}
};

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}
