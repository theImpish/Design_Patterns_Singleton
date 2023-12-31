#include "Singleton.h"


Singleton* Singleton::_instance = 0;

Singleton* Singleton::Instance()
{
	if (Singleton::_instance == 0)
	{
		_instance = new Singleton();
	}

	return _instance;
}
