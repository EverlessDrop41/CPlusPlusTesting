//Hello World in C++
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "Hello World! " << endl;
	cout << "What year is it?: ";
	int wordlAge;
	cin >> wordlAge;
	while (wordlAge < 10) {
		cout << "You're lying" << endl << "Enter what year it is, and don't lie!";
		cin >> wordlAge;
		cout << endl;
	}
	cout << "Wow!, " << wordlAge << " is old!" << endl;
	return 0;
}