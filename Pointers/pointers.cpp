//Pointers in C++
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int testInt = 199;
	cout << "Intitialised testInt with 'testInt = 199'" << endl;
	cout << "&testInt = " << &testInt << endl;
	cout << "*testInt = " << *&testInt << endl;
	return 0;
}
