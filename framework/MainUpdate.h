#pragma once

#include "SceneManager.h"

class MainUpdate
{
public:

	int count;
	MainUpdate();
	~MainUpdate();
	/*
	SCENEID SceneState;
	*/

public:
	void Initialize();
	void Update();
	void Render();
	void Release();
};

