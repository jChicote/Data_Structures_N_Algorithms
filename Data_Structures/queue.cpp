
/*
* Author: Jaiden Chicote
* Created on December 6, 2021
* 
* Script contains basic functionality and tests of usage of a queue data structure.
*/

#include <iostream>
#include <string>

using namespace std;

#define SIZE 10

class queue {

public:
	int items[SIZE];
	int front = -1;
	int rear = -1;

	/*
	* Checks whether the queue is empty
	*/
	bool isEmpty() {
		if (front == -1) {
			return true;
		}
		return false;
	}

	/*
	* Checks whether the queue is full
	*/
	bool isFull() {
		if (front == 0 && rear == SIZE - 1) {
			return true;
		}
		return false;
	}

	/*
	* Adds an element to the end of a queue
	* @params element: the integer to enqueue to the structure
	*/
	void enqueue(int element) {
		if (isFull()) {
			cout << "\n Queue is full \n";
			return;
		}

		if (front == -1) front = 0;
		rear++;
		items[rear] = element;
	}

	/*
	* Removes an element from the front of the queue
	*/
	void dequeue() {
		if (isEmpty()) {
			cout << "\n Queue is Empty \n";
			return;
		}

		if (front >= rear) {
			front = -1;
			rear = -1;
		}
		else {
			front++;
		}
	}

	/*
	* Gets the front of a queue without removing it
	*/
	int peek() {
		if (isEmpty()) {
			cout << "\n Stack is Empty \n";
			return 0;
		}

		return items[front];
	}

	/*
	* Displays the full aray with additional text formatting
	*/
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

/*
* Runs a ticketing queue processing through a queue of individuals for
* an appointment.
*/
void ticketingTest() {

	queue appointmentQueue;
	bool canRun = true;
	int option = 0;
	int currentAppointmentNum = 100;

	cout << "Hello and Welcome to the Ticketing Manager !!! \n";

	while (canRun) {
		cout << "Select option (1 = add new appointment, 2 = run appointment): ";
		cin >> option;

		if (option == 1) {
			appointmentQueue.enqueue(currentAppointmentNum);
			appointmentQueue.display();
			currentAppointmentNum++;
		}
		else if (option == 2) {
			appointmentQueue.dequeue();
			appointmentQueue.display();
		}

		cout << "Would you like to continue? (1 = yes, 0 = no): ";
		cin >> canRun;
		cout << endl;
	}

	appointmentQueue.display();
}

int main() {
	ticketingTest();
	return 0;
}