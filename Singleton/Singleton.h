#pragma once

class Singleton
{
private:
	static Singleton* _instance;

protected:
	Singleton() {};

public:
	static Singleton* Instance();
};
