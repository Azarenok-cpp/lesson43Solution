#include <iostream>
using namespace std;

int main() {
	int number = 10;
	int* pointer = &number;
	int* p = &*pointer;
	//* - получить данные по адресу 
	//& - взятие адреса

	cout << "Number before: " << number << endl;
	*pointer = *pointer * 2;
	cout << "Number after: " << number << endl;

	return 0;
}
	