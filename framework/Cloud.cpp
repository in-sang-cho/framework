#include "Cloud.h"
#include "InputManager.h"
#include "CursorManager.h"

Cloud::Cloud() { }
Cloud::Cloud(Transform _TransInfo) { }
Cloud::~Cloud() { }

void Cloud::Initialize()
{
	strKey = "Cloud";

	TextureList.push_back("£¯£þ¡¬£¯£þ£þ¡¬£¯£þ¡¬");
	TextureList.push_back("¦¢¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¦¢");
	TextureList.push_back("¡¬£ß£¯¡¬£ß£ß£¯¡¬£ß£¯");

	TransInfo.Position = Vector3(float(60 / 2), 5.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(14.0f, 6.0f);
}

int Cloud::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	auto iter = TextureList.begin();
	++iter;

	if (dwKey & KEY_ALT)
	{
		TextureList.insert(iter, "¦¢¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¦¢");
		++TransInfo.Scale.y;
	}

	return 0;
}

void Cloud::Render()
{
	for (int i = 0; i < TextureList.size(); ++i)
	{
		CursorManager::Draw(
			TransInfo.Position.x - (TransInfo.Scale.x * 0.5f),
			TransInfo.Position.y + i,
			TextureList[i]);
	}
}

void Cloud::Release()
{
}