/*******************************************
* Gullible User C++ Program By Tom P.      *
* Ask the user to not input the number     *
* number of times the loop has run         *
********************************************/

#include <iostream>
#include <cctype>
#include <stdlib.h>
#include "gullUser.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int loopAmount = 0;

int main(int argc, char const *argv[])
{
	while (true) {
		cout << "Enter any number but " << loopAmount << endl;
		int userInput = getIntInput();

		if (userInput == loopAmount) {
			cout << "YOU WERE TOLD NOT TO ENTER " << loopAmount << endl;
			cout << "GAME OVER" << endl;

			break;
		}

		loopAmount++;
	}
	return 0;
}

int getIntInput() {
	while (true) {
		string word;
		bool isNumber = true;

		std::getline (cin, word);

		for (int i = 0; i < word.length(); ++i)
		{
			if (!isdigit(word[i])) {
				isNumber = false;
				break;
			}
		}

		if (isNumber) {
			return atoi(word.c_str());
		}
		else {
			cout << "Please enter a number" << endl;
		}
	}
}