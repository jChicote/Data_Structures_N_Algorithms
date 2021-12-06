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
* tabulated in format (name, email, occupation).
*/
void storeContactDetails() 
{
	string userDetails[10][3];
	int loggedUsers = 0;

	string name;
	string email;
	string occupation;

	for (int i = 0; i < 10; i++)
	{
		cout << "Log user detail " << (i + 1) << "\n";
		cout << "Name: ";
		cin >> name;

		cout << "\n" << "Email: ";
		cin >> email;

		cout << "\n" << "Occupation: ";
		cin >> occupation;

		userDetails[i][0] = name;
		userDetails[i][1] = email;
		userDetails[i][2] = occupation;
	}

	// Display all array contents
	for (int i = 0; i < 10; i++) 
	{
		cout << "[ " << userDetails[i][0] << ", " << userDetails[i][1] << ", " << userDetails[i][2] << " ]" << "\n";
	}
}

int main() {
	// Checks for which test example to run
	int exampleTestNumber = 0;
	cout << "Select Test: (1 = userDetails)" << "\n";
	cin >> exampleTestNumber;

	if (exampleTestNumber == 1) {
		storeContactDetails();
	}

	return 0;
}