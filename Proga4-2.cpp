#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int M[6][6] = {
	{1, 2, 3, 4, 5, 6},
	{7, 8, 9, 10, 11, 12},
	{13, 14, 15, 16, 17, 18},
	{19, 20, 21, 22, 23, 24},
	{25, 26, 27, 28, 29, 30},
	{31, 32, 33, 34, 35, 36}
	}, t;
	for (int col = 0; col < 6; col++) {
		t = M[0][col];
		M[0][col] = M[5][col];
		M[5][col] = t;
	}
	for (int col = 0; col < 6; col++) {
		t = M[1][col];
		M[1][col] = M[4][col];
		M[4][col] = t;
	}
	for (int col = 0; col < 6; col++) {
		t = M[2][col];
		M[2][col] = M[3][col];
		M[3][col] = t;
	}
	cout << " Преображенная матрица:" << endl;
	for (int row = 0; row < 6; row++) {
		for (int col = 0; col < 6; col++) {
			cout << " " << M[row][col];
		}
		cout << endl;
	}
	return 0;
}
