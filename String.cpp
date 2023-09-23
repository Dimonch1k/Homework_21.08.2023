#include "String.h"


String::String()
{}

void String::StartString(char* startStr_)
{
	this->startStr = startStr_;
}


void String::ArbitraryString(char* arbitraryStr_)
{
	this->arbitraryStr = arbitraryStr_;
}


void String::UserString(char* userStr_)
{
	this->userStr = userStr_;
}


void String::printAllStrings()
{
	cout << "\n\nAll strings:\n\n\n";
	cout << "The string to 80 symbols: " << startStr << "\n\n";
	
	cout << "The string with given by user length: " << arbitraryStr << "\n\n";

	cout << "The string wiht input string: " << userStr << "\n\n\n\n";
}