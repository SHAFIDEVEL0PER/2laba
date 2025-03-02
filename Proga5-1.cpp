#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int M[3][4] = {
		{1, 2, 3, -5},
		{4, 5, 6, 7},
		{7, 8, 9, 10},
	};

	int posArray[4] = { 0 };
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 4; j++) {
			if (M[i][j] > 0) {
				posArray[j] += M[i][j];
			}
		}
	}

	std::cout << "Суммы положительных элементов столбцов:" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "Столбец " << i + 1 << ": " << posArray[i] << std::endl;
	}

	return 0;
}
