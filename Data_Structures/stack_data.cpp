
/*
* Author: Jaiden Chicote
* Created on December 3, 2021
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
		size++;
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
		size--;
	}

	/*
	* Sees the top element of the stack
	* @return integer for the top element of stack
	*/
	int peek() {
		if (isEmpty()) {
			cout << "\n Stack is Empty \n";
			return;
		}

		return items[top];
	}
};

void stackTest() {

}


int main() {

}