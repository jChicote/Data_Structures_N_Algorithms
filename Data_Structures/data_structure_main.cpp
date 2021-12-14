
#include <iostream>
#include <string>

#include "linearDataStructure.h"

using namespace std;

void RunLinearDataStructure(LinearDataStructure linearDataStructure) {
	cout << "Running Arrays Method:" << "\n";
	linearDataStructure.runArrays();


}

int main() {
	LinearDataStructure linearDataStructure;
	
	RunLinearDataStructure(linearDataStructure);

	return 0;
}