#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;
	cout << "Введите количество строк: ";
	cin >> m;
	cout << "Введите количество столбцов: ";
	cin >> n;
	double M[5][5];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Элемент[" << i + 1 << "," << j + 1 << "] = ";
			cin >> M[i][j];
		}
	}
	double avrg[5];
	for (int i = 0; i < m; i++) {
		double sum = 0;
		for (int j = 0; j < n; j++) {
			sum += M[i][j];
		}
		avrg[i] = sum / n;
	}
	cout << "\nСредние значения каждой строки:\n";
	for (int i = 0; i < m; i++) {
		cout << avrg[i] << endl;
	}
	return 0;
}
