#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int array[size];
	for (int i = 0; i < size; ++i) {
		array[i] = i + 1;
	}
	cout << "Ёлементы массива: ";
	for (int i = 0; i < size; ++i) {
		cout << array[i] << ' ';
	}
	cout << endl;
	int Sum = 0;
	for (int i = 0; i < size; ++i) {
		Sum += array[i];
	}
	cout << "—умма всех элементов массива: " << Sum << endl;
	return 0;
}
