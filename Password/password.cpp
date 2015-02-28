/*
	The C++ password security test program.
	Asks the user for a string and then tests its security 
	checking if it has a number, capital and lower case letter
	Regex is not used to keep readibility
*/
//Include the console I.O. header file
#include <iostream>
#include <cctype>

//Import the used functions from the c++ std namespace
using std::cout;
using std::cin;
using std::endl;
using std::string; //Most modern compilers don't require this, but it's best practice

int main(int argc, char const *argv[])
{
	//Log a welcome message
	cout << "Welcome to a C++ password security tester" << endl;
	cout << "Developed by Tom Peregrine" << endl;

	//Get the users password
	string password;

	cout << "Please input a password: ";
	cin >> password;

	//TODO: Remove this
	cout << "Your password is: " << password << endl;

	return 0;
}

//A function which returns the number of different types of characters found
int typesFound (string password) 
{
	int types = 0;

	if (hasNumber(password))
	{

	}
}

bool hasNumber (string number) 
{
	for (int i = 0; i < number.length(); i++)
	{
		if (isdigit(number[i]))
		{
			return true;
		}
	}
	return false;
}