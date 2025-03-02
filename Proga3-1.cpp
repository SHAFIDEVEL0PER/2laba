#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число: ";
	cin >> n;
	if (n > 0) {
		cout << "¬веденное число положительно" << endl;
	}
	else if (n < 0) {
		cout << "¬веденное число отрицательно" << endl;
	}
	else {
		cout << "¬веденное число равно нулю" << endl;
	}
	return 0;
}
