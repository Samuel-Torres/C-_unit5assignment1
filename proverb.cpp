// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb that is called by the main function

// SAMUEL TORRES

#include <iostream>
using namespace std;

void writeProverb(); // This is the prototype for the writeProverb function

int main()
{
	writeProverb();

	return 0;
}

//*********************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb
//	data in:  none
//	data out: no actual parameter altered
//
//********************************************************************

// This function prints the proverb to the screen
void writeProverb()
{
	cout << "Now is the time for all good men to come to the aid of their party" << endl;
}