/*

Author: Jaiden Chicote
Created on December 3, 2021

NOTE: This does not demonstrate any form of data structures and algorithms. Instead provides an
environment for programming through C++ and familiarizing with the language.

*/


#include <iostream>
#include <string>
#include "simpleCalculator.h"

using namespace std;

int main() {

	// Create a Calculator
	SimpleCalculator calculator;

	bool isFinished = false;

	cout << "Welcome, this is a simple calculator for your needs :)" << "\n";

	int numberA;
	int numberB;
	int result = 0;
	string operation = "none";

	while (!isFinished)
	{
		cout << "Input number A: ";
		cin >> numberA;
		cout << "\n";
		cout << "Input number B: ";
		cin >> numberB;
		cout << "\n";

		cout << "Decide Operation: (+, -, *, /): ";
		cin >> operation;

		if (operation == "+") 
		{
			result = calculator.Add(numberA, numberB);
		}
		else if (operation == "-") 
		{
			result = calculator.Subtract(numberA, numberB);
		}
		else if (operation == "*") 
		{
			result = calculator.Multiply(numberA, numberB);
		}
		else if (operation == "/") 
		{
			result = calculator.Divide(numberA, numberB);
		}
		else 
		{
			cout << ">> Invalid Operator!";
			return 0;
		}

		cout << "The result is: " << result << "\n\n\n";

		string retryResponse;
		cout << "Would you like to do another calculation (Yes | No): ";

		cin >> retryResponse;
		if (retryResponse == "No") {
			isFinished = true;
		}
	}

	return 0;
}