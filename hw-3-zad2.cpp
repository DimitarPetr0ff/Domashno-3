// hw-3-zad2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	char str[10];
	cin >> str;
	int i = 0, counter_num = 0, counter_small_chapters = 0, counter_big_chapters = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			counter_num++;
		if (str[i] >= 'a' && str[i] <= 'z')
			counter_small_chapters++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			counter_big_chapters++;
		i++;
	}
	cout << "Numbers are:" << counter_num << endl;
	cout << "Small chapters are: " << counter_small_chapters << endl;
	cout << "Big chapters are: " << counter_big_chapters << endl;
    return 0;
}

