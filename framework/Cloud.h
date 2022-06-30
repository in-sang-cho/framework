#pragma once
#include "UserInterface.h"

class Cloud : public UserInterface
{
public:
	virtual void Initialize()override;
	virtual int Update()override;
	virtual void Render()override;
	virtual void Release()override;

	virtual Cloud* Clone()override { return new Cloud(*this); }
public:
	Cloud();
	Cloud(Transform _TransInfo);
	virtual ~Cloud();
};
