#define _CRT_SECURE_NO_WARNINGS

#include"String.h"
#include <iostream>
#include<string.h>
#include <Windows.h>
#include <conio.h>

using namespace std;


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyString str("Привет! ");
	MyString str2("Шарафутдінов Максим");

	str.Print();

	MyString resultat = str + str2;

	resultat.Print();

	cout << endl;


	//Другой метод не знаю как сделать.

	char buff[80];

	cout << "Введіть першу стрічку: ";
	cin.getline(buff, 80);
	str = buff;

	cout << "Введіть другу стрічку: ";
	cin.getline(buff, 80);
	str2 = buff;
	cout << endl;

	resultat = str + str2;

	resultat.Print();

	_getch();


}