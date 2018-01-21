// hw-3-zad3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	char chapter = 'A';
	int counter = (int)'A';
	for (chapter, counter; chapter <= 'Z', counter <= (int)'Z'; chapter++, counter++)
		cout << "The chapter: " << chapter << " has got ASCII code: " << counter << endl;

    return 0;
}

