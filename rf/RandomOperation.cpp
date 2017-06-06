#include "stdafx.h"
#include "RandomOperation.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
void RandomOperation::random()
{
	int min = 1;
	int max = 4;
	srand((unsigned)time(0));
	int choose = rand() % (max - min + 1) + min;
	switch (choose){
		case 1: {
			cout<<"+";
		}
		case 2: {
			cout << "-";
		}
		case 3: {
			cout << "*";
		}
		case 4: {
			cout << "/";
		}
		default: {
			cout << " ";
		}

	
	}
	
}

RandomOperation::RandomOperation()
{
}


RandomOperation::~RandomOperation()
{
}
