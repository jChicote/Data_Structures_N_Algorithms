
/*
* Author: Jaiden Chicote
* Created on December 6, 2021
* 
* Script contains basic functionality and tests of usage of a queue data structure.
*/

#include <iostream>
#include <string>

using namespace std;

#define SIZE 10;

class queue {

public:
	int items[SIZE];
	int front, rear = -1;

	bool isEmpty() {
		if (front == -1) {
			return true;
		}
		return false;
	}

	bool isFull() {
		if (front == 0 && rear == SIZE - 1) {
			return true;
		}
		return false;
	}

	void enqueue(int element) {
		if (isFull()) {
			cout << "\n Queue is full \n";
			return;
		}

		if (front == -1) front = 0;
		rear++;
		items[rear] = element;
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "\n Queue is Empty \n";
			return;
		}

		if (front >= rear) {
			front, rear = -1;
		}
		else {
			front++;
		}
	}

	void peek() {
		if (isEmpty()) {
			cout << "\n Stack is Empty \n";
			return 0;
		}

		return items[front];
	}

	void display() {
		int i;
		if (isEmpty()) {
			cout << endl
				<< "Empty Queue" << endl;
		}
		else {
			cout << endl
				<< "Front index-> " << front;
			cout << endl
				<< "Items -> ";
			for (i = front; i <= rear; i++)
				cout << items[i] << "  ";
			cout << endl
				<< "Rear index-> " << rear << endl;
		}
	}
};

void testSample() {

}

int main() {

}