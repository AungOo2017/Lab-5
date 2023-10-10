// Lab 5.cpp : This file contains the 'cypher translation' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

// Cipher we are using in this assignment
std::vector<char> cypher = { 'V', 'F', 'X', 'B', 'L' ,'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 
                             'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

char translate(char c) 
{   // Capital letter
    if (c >= 65 && c <= 90) 
    { 
        return cypher[c - 65];
    }
    // Lower case letter
    else if (c >= 97 && c <= 122) 
    { 
        // converts the number to upper case number
        char upperCaseLetter = c - 32; 
        // get upper case code
        char upperCaseCode = cypher[upperCaseLetter - 65]; 
        // convert code back to lower case
        return upperCaseCode + 32; 
    }
    else 
    { 
        // Not letter
        return c;
    }
}

int main() 
{
    std::string text;
    std::cout << "Input text to cypher: ";
    getline(std::cin, text);

    for (char& c : text) 
    {
        c = translate(c);
    }

    std::cout << "Encodes Message: " << text << "..." << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
