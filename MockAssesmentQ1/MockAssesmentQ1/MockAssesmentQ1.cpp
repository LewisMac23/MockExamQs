// MockAssesmentQ1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

/**
 *  countChar
 *
 *  This function takes in a string and a character as input, and returns the
 * number of occurrences of the character in the string.
 *
 *  @param myString : a string in which the function will search for the
 * character
 *  @param searchChar : the character that we are looking for in the string
 *  @param ignoreCase : a boolean value that determines whether the function
 * should ignore character case or not
 *
 *  @return : an integer, the number of occurrences of the character in the
 * string
 */

int countChar(string myString, char searchChar, bool ignoreCase = false) {
    // TODO: implement this function
    int count{ 0 }, c2{ 0 };

    for (int i=0; i < myString.length(); i++ )
    {
        if (myString[i] == searchChar) {
            count++;
        }

    }
    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] == searchChar || myString[i] == toupper(searchChar)) {
            c2++;
        }

    }

    if (ignoreCase == false) {
        return c2;
    }
    else if (ignoreCase == true) {
        return count;
    }
}

int main() {
    string myString = "HelloOOooOO World!";
    cout << "The string is: " << myString << endl;
    char searchChar = 'o';
    int count = countChar(myString, searchChar);
    cout << "The character '" << searchChar << "' appears " << count << " times in the string." << std::endl;
    cout << "CAUTION: This is case sensitive! The default value for the third argument is false."<< endl;

    count = countChar(myString, searchChar, true);
    cout << "The character '" << searchChar << "' appears " << count << " times in the string." << std::endl;
    cout << "This call is case insensitive (3rd parameter true)!" << endl;

    return 0;
}