#pragma once

#include "Headers.h"

class InputManager
{
private:
	static InputManager* Instance;

public:
	static InputManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new InputManager;

		return Instance;
	}

private:
	DWORD Key = 0;

public:
	void InputKey();

private:

public:
	InputManager();
	~InputManager();
};
