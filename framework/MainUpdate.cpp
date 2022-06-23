#include "MainUpdate.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
	Release();
}

void MainUpdate::Initialize()
{
}

void MainUpdate::Update()
{
	++count;

	if (count <= 100)
	{
		count = 0;

	}
}

void MainUpdate::Render()
{
}

void MainUpdate::Release()
{
}
