// rf.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"RandomFactory.h"
#include<iostream>
using namespace std;
int main()
{
	RandomFactory rf;
	Random *rd = &rf.createRandom(1);
	
    return 0;
}

