#pragma once
#include <iostream>
#include <string.h>
#include <string>

using namespace std;



class String
{
private:
	char* startStr;
	char* arbitraryStr;
	char* userStr;

public:
	String();

	void StartString(char* startStr_); // The string to 80 symbols

	void ArbitraryString(char* arbitraryStr_); // The string with given by user size

	void UserString(char* userStr_); // The string that user input

	void printAllStrings();
};

