// ChangeSpaceOnTab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a;
	getline(cin, a);
	int size = a.size();//введення рядка
	for (int i = 0; i < size; i++)
	{
		if (a[i] == ' ')//пошук пробілів в рядку
		{
			a[i] = '\t';//заміна пробілів на табуляцію
		}
	}
	cout << a;//виведення зміненого рядка
}
