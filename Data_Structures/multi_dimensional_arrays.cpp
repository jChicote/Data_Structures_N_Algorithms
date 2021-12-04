/**
* 
* Simple test of the use of multi-dimensional arrays in C++.
* These arrays are basically arrays in arrays.
* 
*/

#include <iostream>
#include <string>

using namespace std;

/**
* Creates multi-dimensional arrays storing basic user details
* tabulated in format (name, date of birth, email).
*/
void storeContactDetails() {

}

int main() {
	// Checks for which test example to run
	int exampleTestNumber = 0;
	cin >> exampleTestNumber;

	if (exampleTestNumber == 0) {
		storeContactDetails();
	}

	return 0;
}