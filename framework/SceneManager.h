#pragma once
#include "Headers.h"

class Scene;				// <= ���� ���� Ŭ������ ����� ��(�ļ��� �����)
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
	Scene* SceneState;		// <= �Լ� ������ü�� �� �� ����. Ŭ���� ��ü�� ���. ���⼭�� SceneState�� �ִ� ô�� �ҰŶ� �̷��� �� �� ����
public:
	void SetScene(SCENEID _SceneState);
	void Update();
	void Render();
	void Release();
private:
	SceneManager();
public:
	~SceneManager();
};
