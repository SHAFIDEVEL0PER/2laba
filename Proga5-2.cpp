#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int M[3][4] = {
		{1, 2, 3, 12},
		{4, 5, 6, 7},
		{7, 8, 9, 10},
	};

	int min = M[0][0], max = M[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (M[i][j] < min) {
				min = M[i][j];
			}
			if (M[i][j] > max) {
				max = M[i][j];
			}
		}
	}
	double average = (max + min) / 2.0;
	cout << "Среднее арифметическое между максимальным и минимальным элементами: " << average << endl;
	return 0;
}
