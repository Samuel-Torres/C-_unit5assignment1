// This program will allow the user to input from the keyboard
// the word that should finish the following proverb:
// "Now is the time for all good men to come to the aid of their ___"
//
// SAMUEL TORRES

#include <iostream>
#include <string>
using namespace std;

// Prototype: writeProverb now accepts a string ending to finish the proverb.
void writeProverb(const string &ending);

int main()
{
	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;

	cout << "Please input the word you would like to have finish the proverb" << endl;
	string ending;
	cin >> ending; // read a single word to finish the proverb
	cout << endl;

	writeProverb(ending);

	return 0;
}

// writeProverb: prints the proverb using the provided ending word
void writeProverb(const string &ending)
{
	cout << "Now is the time for all good men to come to the aid of their " << ending << "." << endl;
}