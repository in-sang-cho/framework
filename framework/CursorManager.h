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
	int BufferIndex;	// ** ������ �ε��������� ���� ����
	HANDLE hBuffer[2];	// ** 2���� ����
public:
	void CreateBuffer(const int& _Width, const int& _Height);			// ** ���۸� ����
	void WriteBuffer(float _X, float _Y, char* _str, int _Color);		// ** ���۸� �ۼ�(�׸���)
	void WriteBuffer(Vector3 _Position, char* _str, int _Color);		// ** ���۸� �ۼ�(�׸���)
	void FilppingBuffer();												// ** ���۸� ��ȯ
	void ClearBuffer();													// ** �ۼ��� ���� ����� 
	void DestroyBuffer();												// ** ���� ����
	void SetColor(int _Color);											// ** ���ڿ� ���� ����
private:
	
	CursorManager();
public:
	~CursorManager();
};

