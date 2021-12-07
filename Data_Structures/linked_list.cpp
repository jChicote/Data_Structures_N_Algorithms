/*
*/

#include <iostream>
#include <string>

using namespace std;

/*
*/
class node {

public:
	int value;
	node* next;

	int getData() {
		return value;
	}
};

/*
*/
class linked_list {
public:
	node* head;
	node* tail;

	/*
	*/
	linked_list() {
		head = NULL;
		tail = NULL;
	}

	/*
	*/
	bool isEmpty() {
		if (tail == nullptr) {
			cout << "\n Linked List is Empty \n";
			return true;
		}

		return false;
	}

	/*
	*/
	void append(int element) {

	}

	/*
	*/
	void prepend(int element) {

	}

	/*
	*/
	void erase(int element_to_erase) {

	}
};

int main() {
	return 0;
}