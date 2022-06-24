// framework v1.1

#include "Headers.h"
#include "MainUpdate.h"
#include "InputManager.h"

class Singleton	
{
private:
	static Singleton* Instance;

public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton;

		return Instance;
	}

private:
	int Number;

public:
	int GetNumber() const { return Number; }
	void SetNumber(const int& _Number) { Number = _Number; }

private:
	Singleton() : Number(0) {};
public:
	~Singleton() {};
};

Singleton* Singleton::Instance;


const DWORD KEY_UP = 1;
const DWORD KEY_DOWN = 2;
const DWORD KEY_LEFT = 4;
const DWORD KEY_RIGHT = 8;
const DWORD KEY_SPACE = 16;
const DWORD KEY_RETURN = 32;
const DWORD KEY_CTRL = 64;
const DWORD KEY_ALT = 128;




int main(void)
{
	
	



	return 0;
}