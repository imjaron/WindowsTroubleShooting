// WindowsTroubleShooting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thread>
#include <iostream>
#include <time.h>

using namespace std;

void Test2_1()
{
	int hgt = 9;
	int wid = 6;

	//int A[100];
#pragma loop(hint_parallel(4))
	for (int i = 0; i < hgt; i++)
	{
		for (int j = 0; j < wid; j++)
		{
			this_thread::sleep_for(1s);
			//A[i*wid + j] = i*i + j*j;
		}
	}
}

int main()
{
	int b;

	clock_t c = clock();

	Test2_1();

	cout << clock() - c << endl;

    return 0;
}

