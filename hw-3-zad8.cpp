// hw-3-zad8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int length(char* string)
{
	int length = 0;
	for (int i = 0; string[i] != '\0'; i++)
		length++;
	return length;
}

int main()
{
	char string[100];
	cin >> string;
	cout << "The length is: " << length(string) << endl;

    return 0;
}

