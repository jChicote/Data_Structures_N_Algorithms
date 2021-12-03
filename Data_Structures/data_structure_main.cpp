
#include <iostream>
#include <string>
using namespace std;

int main() {
	string i;
	cout << "Hello World" << "\n";
	cout << "Type in your response: ";
	getline(cin, i);
	cout << "You've typed " << i << "\n";
	return 0;
}