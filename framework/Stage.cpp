﻿#include "Stage.h"
#include "Player.h"
#include "Enemy.h"
#include "SceneManager.h"
#include "CursorManager.h"
#include "CollisionManager.h"
#include "ObjectManager.h"

Stage::Stage() : pPlayer(nullptr) { }
Stage::~Stage() { Release(); }


void Stage::Initialize()
{
	Object* pEnemyProto = new Enemy;
	pEnemyProto->Initialize();

	for (int i = 0; i < 5; ++i)
	{
		srand(DWORD(GetTickCount64() * (i + 1)));

		Object* pEnemy = pEnemyProto->Clone();
		//pEnemy->SetPosition(118.0f, float(rand() % 30));
		pEnemy->SetPosition(float(rand() % 118), float(rand() & 30));

		ObjectManager::GetInstance()->AddObject(pEnemy);
	}
}

void Stage::Update()
{
	ObjectManager::GetInstance()->Update();

	Object* pPlayerList = ObjectManager::GetInstance()->GetObjectList("P")->front();
	list<Object*>* pBulletList = ObjectManager::GetInstance()->GetObjectList("o");
	list<Object*>* pEnemyList = ObjectManager::GetInstance()->GetObjectList("E");

	if (pBulletList != nullptr)
	{
		for (list<Object*>::iterator iter = pBulletList->begin();
			iter != pBulletList->end(); )
		{
			if ((*iter)->GetPosition().x >= 120.0f)
				iter = pBulletList->erase(iter);
			else
				++iter;
		}
	}

	if (pEnemyList != nullptr && pBulletList != nullptr)
	{
		for (list<Object*>::iterator Bulletiter = pBulletList->begin();
			Bulletiter != pBulletList->end(); ++Bulletiter)
		{
			for (list<Object*>::iterator Enemyiter = pEnemyList->begin();
				Enemyiter != pEnemyList->end(); ++Enemyiter)
			{
				if (CollisionManager::Collision(*Bulletiter, *Enemyiter))
				{
					CursorManager::Draw(50.0f, 1.0f, "충돌입니다");
				}
			}
		}
	}
	
	if (pPlayerList != nullptr && pEnemyList != nullptr)
	{
			for (list<Object*>::iterator Enemyiter = pEnemyList->begin();
				Enemyiter != pEnemyList->end(); ++Enemyiter)
			{
				if (CollisionManager::Collision(pPlayerList, *Enemyiter))
				{
					CursorManager::Draw(50.0f, 1.0f, "충돌입니다");
				}
			}
	}
}

void Stage::Render()
{
	ObjectManager::GetInstance()->Render();
}

void Stage::Release()
{
	::Safe_Delete(pPlayer);
}