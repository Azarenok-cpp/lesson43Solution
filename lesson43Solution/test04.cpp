#include <iostream>
using namespace std;

int main() {
	int number = 10;
	int* pointer = &number;
	int* p = &*pointer;
	//* - �������� ������ �� ������ 
	//& - ������ ������

	cout << "Number before: " << number << endl;
	*pointer = *pointer * 2;
	cout << "Number after: " << number << endl;

	return 0;
}
	