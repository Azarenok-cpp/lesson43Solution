//#include <iostream>
//using namespace std;
///*		v.1.0
//		Azarenok Rodion Maximovich, P13024, 15.02.2025	*/
//
//int* init(int* size) {
//	*size = 5;
//	int* array = new int[*size]; 
//
//	for (int i = 0; i < *size; i++)
//	{
//		*(array + i) = rand() % 10;
//	}
//	
//	
//
//	//for (int i = 0; i < 5; i++) //не работает, так как стек 
//	//							//освобождается после отработки инит
//	//{
//	//	array[i] = rand() % 10;
//	//}
//	return array;
//}
//
//int main() {
//	srand(time(0));
//	int size;
//	int* array = init(&size);
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i] << " ";
//	}
//	delete[] array;
//	return 0;
//}