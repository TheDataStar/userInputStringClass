// FileName: userDefinedString.cpp
// Project: CS288T Unit 2 Submission 2 - Object Oriented Concepts using C++ Cont.
// Author: Adam Greenwood (22579036)

#include <iostream>
#include <string>

using namespace std;

class userString
{
public:

	// Data Members (features)
	string userInput;

	// Member functions
	void setInput();
	string getInput();
	int inputLength();
	string inputReverse();
	string inputConcat();
};

void userString::setInput()
{
	cout << "Enter your string: " << endl;
	cin >> userInput;
};

string userString::getInput()
{
	cout << "You entered: " << userInput << endl;
	return userInput;
};

int userString::inputLength()
{
	cout << "The size of the string is: " << userInput.length() << endl;
	return 0;
};

string userString::inputReverse()
{
	int len = userInput.length();
	int n = len - 1;
	for (int i = 0; i < (len / 2); i++)
	{
		swap(userInput[i], userInput[n]);
		n = n - 1;
	}

	cout << "Your string reversed is: " << userInput << endl;
	return userInput;
};

string userString::inputConcat()
{
	cout << "Concatenation of this string looks like this: " << userInput + " " + userInput;
	return userInput;
};

int main()
{
	userString first;
	first.setInput();
	first.getInput();
	first.inputLength();
	first.inputReverse();

	userString second;
	second.setInput();
	second.getInput();
	second.inputLength();
	second.inputReverse();

	return 0;
};