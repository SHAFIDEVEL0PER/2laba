#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int M[5][5] = {
	{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15},
	{16, 17, 18, 19, 20},
	{21, 22, 23, 24, 25}
	};
	int mult = 1;
	for (int i = 0; i < 5; i++) {
		mult *= M[i][4 - i];
	}
	cout << "Произведение элементов побочной диагонали: " << mult << endl;
	return 0;
}
