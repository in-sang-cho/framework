#pragma once

#define Message(str) (cout << str << endl)

template <typename T>
inline void Safe_Delete(T* _Obj)
{
	delete _Obj;
	_Obj = nullptr;
}