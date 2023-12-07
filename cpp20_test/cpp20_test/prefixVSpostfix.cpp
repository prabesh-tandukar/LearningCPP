#include <iostream>
using namespace std;

int main() {
	//demonstrate postfix increment operator
	int c{ 5 };
	cout << "c before postincrement: " << c << "\n"; //prints 5
	cout << " postincrementing c: " << c++ << "\n"; //prints 5
	cout << "c after postincrement: " << c << "\n"; //prints 6

	cout << "\n"; 

	//demonstrate prefix increment operaor
	c = 5;
	cout << " c before preincrement " << c << "\n"; //prints 5
	cout << " preincrementing c: " << ++c << "\n"; //prints 6
	cout << " c after preincrement: " << c << "\n"; //prints 6
}