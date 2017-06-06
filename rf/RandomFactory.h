#pragma once
#include"Random.h"

class RandomFactory
{
public:
	Random createRandom(int choose);
	RandomFactory();
	~RandomFactory();
};

