// rf.cpp : �������̨Ӧ�ó������ڵ㡣
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

