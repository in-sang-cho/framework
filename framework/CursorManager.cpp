#include "CursorManager.h"

CursorManager* CursorManager::Instance = nullptr;

CursorManager::CursorManager() : BufferIndex(0) { }
CursorManager::~CursorManager() { }

void CursorManager::CreateBuffer(const int& _Width, const int& _Height)
{
	// ** 커서 설정
	CONSOLE_CURSOR_INFO Cursor;

	Cursor.bVisible = FALSE;		// ** 커서 비가시화
	Cursor.dwSize = 1;				// ** 커서의 사이즈 설정

	COORD Size = {(SHORT)_Width, (SHORT)_Height};
	SMALL_RECT rect = { 0, 0, _Width, _Height };

	for (int i = 0; i < 2; i++)
	{
		// ** 버퍼 생성
		hBuffer[i] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
		
		// ** 버퍼 사이즈 설정
		SetConsoleScreenBufferSize(hBuffer[i], Size);
		
		// ** 버퍼가 포함될 윈도우 사이즈 설정
		SetConsoleWindowInfo(hBuffer[i], TRUE, &rect);
		
		// ** 커서 셋팅
		SetConsoleCursorInfo(hBuffer[i], &Cursor);
	}


	/*
	hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleScreenBufferSize(hBuffer[0], Size);
	SetConsoleWindowInfo(hBuffer[0], TRUE, &rect);

	hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleScreenBufferSize(hBuffer[1], Size);
	SetConsoleWindowInfo(hBuffer[0], TRUE, &rect);


	SetConsoleCursorInfo(hBuffer[0], &Cursor);
	SetConsoleCursorInfo(hBuffer[1], &Cursor);
	*/
}

void CursorManager::WriteBuffer(float _X, float _Y, char* _str, int _Color)
{
	DWORD dw;

	COORD CursorPosition = { (SHORT)_X, (SHORT)_Y };

	// 좌표 이동
	SetConsoleCursorPosition(hBuffer[BufferIndex], CursorPosition);

	// ** 텍스트 색 변경
	SetColor(_Color);

	// 버퍼에 쓰기
	WriteFile(hBuffer[BufferIndex], _str, (DWORD)strlen(_str), &dw, NULL);
}

void CursorManager::WriteBuffer(Vector3 _Position, char* _str, int _Color)
{
	DWORD dw;

	COORD CursorPosition = { (SHORT)_Position.x, (SHORT)_Position.y };

	// 좌표 이동
	SetConsoleCursorPosition(hBuffer[BufferIndex], CursorPosition);

	// ** 텍스트 색 변경
	SetColor(_Color);

	// 버퍼에 쓰기
	WriteFile(hBuffer[BufferIndex], _str, (DWORD)strlen(_str), &dw, NULL);
}

void CursorManager::FilppingBuffer()
{
	SetConsoleActiveScreenBuffer(hBuffer[BufferIndex]);
	BufferIndex = !BufferIndex;

	ClearBuffer();
}

void CursorManager::ClearBuffer()
{
	DWORD dw;
	COORD Coord = { 0, 0 };

	FillConsoleOutputCharacter(hBuffer[BufferIndex], ' ', 120*30, Coord, &dw);
}

void CursorManager::DestroyBuffer()
{
	// hBuffer[BufferIndex]
	CloseHandle(hBuffer[0]);
	CloseHandle(hBuffer[0]);
	
}

void CursorManager::SetColor(int _Color)
{
	SetConsoleTextAttribute(hBuffer[BufferIndex], _Color);
}
