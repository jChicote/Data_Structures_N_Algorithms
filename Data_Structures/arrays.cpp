/**\
* 
* Demonstrates the basic use of simple array structures in C++
* 
* @details
* This includes only a simple test set of functions that utilise the native
* array structures using in C++
* 
*/

#include <iostream>
#include <string>

using namespace std;

/**
* Peforms a simple array loop with incrementing values
*/
void testLoopArray()
{
	// Initialise with no values
	int fooArray[5] = {};

	// Loads values in increments of 10
	cout << "[";
	for (int i = 0; i < 5; i++)
	{
		fooArray[i] = i * 10;
		cout << fooArray[i] << " ";
	}
	cout << "]" << "\n";
}

int main() 
{
	testLoopArrays();

	return 0;
}