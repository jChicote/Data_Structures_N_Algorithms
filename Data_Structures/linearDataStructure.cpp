/**
* Basic implementation involving the articulation and usage of arrays.
*/

#include <iostream>
#include "linearDataStructure.h"
using namespace std;

void LinearDataStructure::runArrays()
{
	int fooArray[5] = {}; // Initialise with no values

	// Loads values in increments of 10
	cout << "[";
	for (int i = 0; i < 5; i++) 
	{
		fooArray[i] = i * 10;
		cout << fooArray[i] << " ";
	}
	cout << "]" << "\n";
}

void LinearDataStructure::runStackData() {

}