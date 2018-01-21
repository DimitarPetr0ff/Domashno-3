// hw-3-zad1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	char small_chapter = 0;
	cin >> small_chapter;
	if (small_chapter >= 'a' && small_chapter <= 'z')
	{
		small_chapter -= ('a' - 'A');
	}
	cout << small_chapter << endl;

    return 0;
}

