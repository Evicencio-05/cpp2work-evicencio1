#include "Pair.h"
#include "Pair.cpp" //need to add cpp if template

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "PAIR OF INTEGERS";
	Pair<int> pInt1(1, 2);
	cout << "\nPair is: ";
	pInt1.print();

	cout << "\n\nPAIR OF DOUBLES"; 	
	Pair<double> pDouble1(4.5, 2.3);
	cout << "\nPair is: ";
	pDouble1.print();

	cout << "\n\nPAIR OF STRINGS";
	Pair<string> pString1("what", "how");
	cout << "\nPair is: ";
	pString1.print();

	cout << endl;
	return 0;
}
