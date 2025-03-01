//#include <iostream>
//using namespace std;
///*		v.1.0
//		Azarenok Rodion Maximovich, P13024, 15.02.2025	*/
//
//int* init() {
//	int* array = new int[5]; //в хипе, не в стеке
//	*(array + 0) = rand() % 10;
//	*(array + 1) = rand() % 10;
//	*(array + 2) = rand() % 10;
//	*(array + 3) = rand() % 10;
//	*(array + 4) = rand() % 10;
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
//	int* array = init();
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array[i] << " ";
//	}
//	delete[] array;
//	return 0;
//}