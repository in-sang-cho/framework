#pragma once
#include "Headers.h"

class CursorManager
{
private:
	static CursorManager* Instance;
public:
	static CursorManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new CursorManager;

		return Instance;
	}
private:
	int BufferIndex;	// ** 버퍼의 인덱스접근을 위한 변수
	HANDLE hBuffer[2];	// ** 2개의 버퍼
public:
	void CreateBuffer(const int& _Width, const int& _Height);			// ** 버퍼를 생성
	void WriteBuffer(float _X, float _Y, char* _str, int _Color);		// ** 버퍼를 작성(그리기)
	void WriteBuffer(Vector3 _Position, char* _str, int _Color);		// ** 버퍼를 작성(그리기)
	void FilppingBuffer();												// ** 버퍼를 전환
	void ClearBuffer();													// ** 작성한 버퍼 지우기 
	void DestroyBuffer();												// ** 버퍼 해제
	void SetColor(int _Color);											// ** 문자열 색상 변경
private:
	
	CursorManager();
public:
	~CursorManager();
};

