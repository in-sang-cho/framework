#pragma once
#include "Headers.h"
#include "Enum.h"

class SceneManager
{
private:
	static SceneManager* Instance;

public:
	static SceneManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new SceneManager;

		return Instance;
	}

private:
	

public:
	void SetScene(SCENEID _SceneState);

private:
	SceneManager();

public:
	~SceneManager();
};

