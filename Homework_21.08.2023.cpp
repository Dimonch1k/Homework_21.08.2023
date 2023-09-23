#include <iostream>
#include <string.h>
#include <string>

using namespace std;



// Class String for working with strings

#include "String.h"

class StartStr : public exception
{
public:
    StartStr(string message) : exception(message.c_str()) {}
};

class ArbitraryStr : public exception
{
public:
    ArbitraryStr(string message) : exception(message.c_str()) {}
};

void inputStrings()
{
    try {
        char start[] = "";

        int size = 0;
        char arbitrary[] = "";

        char user[] = "";


        // The user input string with length to 80 symbols
        cout << "Start string to 80 symbols: "; 
        fgets(start, INT_MAX, stdin);
        if (strlen(start) > 80)
        {
            throw StartStr("You input string with more than 80 symbols!\n\n\n");
        }
        



        cout << "\nSize: "; cin >> size;// User input size of arbitrary string
        cout << "\nArbitrary string: "; fgets(arbitrary, INT_MAX, stdin); // User input arbitrary string

        if (strlen(arbitrary) > 80)
        {
            throw ArbitraryStr("You input string with more than size input by you\n\n\n");
        }


        cin >> size;
        cout << "\nUser string: "; fgets(user, INT_MAX, stdin); // The user input string with infinity length

        String string;

        string.StartString(start);
        string.ArbitraryString(arbitrary);
        string.UserString(user);

        string.printAllStrings();
        return;
    }

    catch (const StartStr& startStr)
    {
        cout << startStr.what() << "\n\n";
        inputStrings();
    }

    catch (const ArbitraryStr& arbitraryStr)
    {
        cout << arbitraryStr.what() << "\n\n";
        inputStrings();
    }
}

int main()
{
    inputStrings();
}


// In this program I have a problems: if user input size, than user can input only user string;
// if user doesn't input size, than user can input arbitrary string and after user

// Also I have a problem: when the program end, it give me some problem and I don't know
// how decide this problem, but if you enter in console after this problem, all is good