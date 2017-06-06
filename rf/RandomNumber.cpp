#include "stdafx.h"
#include "RandomNumber.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
void RandomNumber::random()
{
	int min = 0;
	int max = 10000;
	srand((unsigned)time(0));
	cout<<rand()%(max-min+1)+min;
	
}

RandomNumber::RandomNumber()
{
}


RandomNumber::~RandomNumber()
{
}
