// hw-3-zad5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	char str[100];
	cin >> str;
	int i = 0, counter_position = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'A' || str[i] <= 'Z' && str[i] != str[i - 1])
		{
			cout << i + 1 << endl;
			counter_position++;
		}
		i++;
	}
	cout << "The position/s of the bigger chapter is/are: " << counter_position << endl;
    return 0;
}

