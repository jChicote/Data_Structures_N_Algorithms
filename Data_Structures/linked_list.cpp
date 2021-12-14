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

	node(int value, node* nextNode) {
		this->value = value;
		next = nextNode;
	}

	int getData() {
		return value;
	}

	node* getNext() {
		return next;
	}

	void setNext(node* nextNode) {
		next = nextNode;
	}
};

/*
*/
class linked_list {
public:
	node* head;
	int length = 0;

	/*
	*/
	linked_list() {
		head = NULL;
	}

	/*
	*/
	bool isEmpty() {
		if (length == 0) {
			cout << "\n Linked List is Empty \n";
			return true;
		}

		return false;
	}

	/*
	*/
	void append(int value) {
		node* newNode = new node(value, nullptr);

		if (head == nullptr) {
			head = newNode;
		}
		else {
			node* current = head;
			while (current->getNext() != nullptr) {
				current = current->getNext();
			}
			current->setNext(newNode);
		}

		length++;
	}

	/*
	*/
	void prepend(int value) {
		node* newNode = new node(value, nullptr);
		newNode->next = head;
		head = newNode;
		
		length++;
		cout << head->getData();
	}

	void insert(int value, int position) {
		node* newNode = new node(value, nullptr);
		node* temp = head;

		for (int i = 0; i < position; i++) {
			if (temp->getNext() != NULL) {
				temp = temp->getNext(); 
			}
		}

		newNode->next = temp->getNext();
		temp->next = newNode;

		length++;
	}

	/*
	*/
	void erase(int element_to_erase) {

	}

	void display() {
		int i;
		if (isEmpty()) {

		}
		else {
			cout << endl
				<< "Items -> ";

			node* current = head;
			for (i = 0; i < length; i++) {
				cout << current->getData() << "  ";
				current = current->getNext();
			}
		}
	}
};

void test() {
	linked_list list;
	bool isRunning = true;
	int selection = 0;

	while (isRunning) {

		cout << "Choose selection: (1 = Prepend, 2 = Append, 3 = Insert, 4 = display) ";
		cin >> selection;

		if (selection == 1) {
			int value; 
			cout << "\n Prepend value: ";
			cin >> value;
			list.prepend(value);
			list.display();
		}
		else if (selection == 2) {
			int value;
			cout << "\n Append value: ";
			cin >> value;
			list.append(value);
			list.display();
		}
		else if (selection == 3) {
			int value;
			int position = 0;
			cout << "\n Insert value: ";
			cin >> value;
			cout << "\n Set position to : " << "(NOTE: Length at = " << list.length << ") ";
			cin >> position;
			list.insert(value, position);
			list.display();
		}
		else if (selection == 4) {
			list.display();
		}

		cout << "\n Can Run?: ";
		cin >> isRunning;
		cout << endl;
	}
}

int main() {
	test();

	return 0;
}