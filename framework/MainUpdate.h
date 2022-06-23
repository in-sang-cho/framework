#pragma once

#include "SceneManager.h"

class MainUpdate
{
public:

	int count;
	MainUpdate();
	~MainUpdate();

public:
	void Initialize();
	void Update();
	void Render();
	void Release();
};

