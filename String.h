#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include<string.h>

using namespace std;


class MyString
{

private:

	char* str;

public:

	MyString();

	MyString(const char* _str);

	MyString& operator =(const MyString& obj);
	MyString(const MyString& obj);

	MyString operator +(const MyString& obj);


	void Print();


	~MyString();
};
