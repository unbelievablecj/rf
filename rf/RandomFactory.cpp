#include "stdafx.h"
#include "RandomFactory.h"
#include"RandomNumber.h"
#include"RandomOperation.h"

;

Random RandomFactory::createRandom(int choose)
{
	Random *rd;
	//1是随机数字类
	//2是随机操作符类
	switch (choose)
	{
	case 1:
	{
		rd = new RandomNumber();
		break;
	}
	case 2:
	{
		rd = new RandomOperation();
		break;
	}
	default:
		break;
	}
	return *rd;
}

RandomFactory::RandomFactory()
{
}


RandomFactory::~RandomFactory()
{
}
