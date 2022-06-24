#pragma once
#include "Headers.h"

class Scene;				// <= 정의 없이 클래스를 만들어 둠(꼼수에 가까움)
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
	Scene* SceneState;		// <= 함수 정의자체를 할 수 없다. 클래스 자체가 없어서. 여기서는 SceneState를 있는 척만 할거라서 이렇게 해 둠 ㅇㅇ
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
