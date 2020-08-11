// FileName: userDefinedString.cpp
// Project: CS288T Unit 2 Submission 2 - Object Oriented Concepts using C++ Cont.
// Author: Adam Greenwood (22579036)

#include <iostream>
#include <string>

using namespace std;

class userString
{
private:
	string userInput1; // Data Members (featurea)
	string userInput2;

public:

	// Constructor
	userString();

	// Member functions
	string setInput(string userInput1, string userInput2);
	string getInput(string userInput1, string userInput2);
};

