#include <iostream>
using namespace std;
/*		v.1.0
		Azarenok Rodion Maximovich, P13024, 15.02.2025	*/

int* init(int* size) {
	*size = 5;
	int* array = new int[*size];

	for (int i = 0; i < *size; i++)
	{
		*(array + i) = i*10;
	}



	//for (int i = 0; i < 5; i++) //не работает, так как стек 
	//							//освобождается после отработки инит
	//{
	//	array[i] = rand() % 10;
	//}
	return array;
}

int main() {
	int size;
	init(&size);

	int* array = new int[size];

	*&array[0] = 1;
	*&array[1] = 11;
	*&array[2] = 111;
	*&array[3] = 1111;
	*&array[4] = 11111;

	int vector[10];
	//array = init(&size);

	for (int i = 0; i < size; i++) //*(array + i) = array[i] и имя массива есть указатель 
									//на его первый элемент
	{
		cout << *(array + i) << " - " << array[i] << endl;
	}
	return 0;
}