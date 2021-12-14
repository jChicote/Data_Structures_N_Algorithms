
/*
* Author: Jaiden Chicote
* Created on December 6, 2021
* 
* Script contains basic functionality and tests of usage of a stack data structure.
* 
*/

#include <iostream>
#include <string>

using namespace std;

#define MAX 10

/*
* Grouped linear data structure using LIFO for array insertion and removal.
*/
class stack {
public:
	int items[MAX];
	int top = -1;
	int currentSize = 0;

	/*
	* Check if the stack is empty
	* @return boolean for if the stack is empty
	*/
	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}

	/*
	* Check if the stack is full
	* @return boolean for checking if it is full
	*/
	bool isFull() {
		if (top == MAX - 1) {
			return true;
		}
		else {
			return false;
		}
	}

	/*
	* Pushes given element to the top of the stack
	* @params element: the next integer value for the top of the stack
	*/
	void push(int element) {
		if (isFull()) {
			cout << "\n Stack is Full \n";
			return;
		}

		top++;
		currentSize++;
		items[top] = element;
	}

	/*
	* Removes the topmost element within the array stack
	*/
	void pop() {
		if (isEmpty()) {
			cout << "\n Stack is Empty \n";
			return;
		}

		top--;
		currentSize--;
	}

	/*
	* Sees the top element of the stack
	* @return integer for the top element of stack
	*/
	int peek() {
		if (isEmpty()) {
			cout << "\n Stack is Empty \n";
			return 0;
		}

		return items[top];
	}

	void displayArray() {
		for (int i = 0; i <= top; i++) {
			cout << items[i];
		}
	}
};

/*
* Performs simple loop that takes in user (awsd) movements and stores a log of the first 10 
* movements of the controlled hypothetical character. The character can move in any directions
* but can backtrack movement history.
*/
void characterMovementTest() {
	stack characterMovement;
	bool continueMovement = true;

	string key;

	while (continueMovement) {
		// Validy checks for next movement
		if (characterMovement.isFull()) {
			continueMovement = false;
		}

		// decide movement
		cout << "\n What is your next direction (awsd) (b = walk back): ";
		cin >> key;

		if (key == "a") {
			characterMovement.push(1);
			cout << "\n You have moved left";
		}
		else if (key == "w") {
			characterMovement.push(2);
			cout << "\n You have moved up";
		}
		else if (key == "s") {
			characterMovement.push(3);
			cout << "\n You have moved down";
		}
		else if (key == "d") {
			characterMovement.push(4);
			cout << "\n You have moved right";
		}
		else if (key == "b") {
			characterMovement.pop();
			cout << "\n You have moved back a step";
		}
		else {
			cout << "/n Input invalid";
		}

		cout << "\n Want to continue movement? (1 = Yes, 0 = No): ";
		cin >> continueMovement;
		cout << "\n";
	}

	characterMovement.displayArray();
}


int main() {

	// perform character movement test
	characterMovementTest();
}