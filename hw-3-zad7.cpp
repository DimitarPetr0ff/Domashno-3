// hw-3-zad7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int pow(int a, int b)
{
	if (b == 0)
		return 1;
	else if (b > 0)
		return a * pow(a, b - 1);
	else
		return 1 / pow(a, -b);
}

int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	cout << pow(x, n) << endl;
    return 0;
}

