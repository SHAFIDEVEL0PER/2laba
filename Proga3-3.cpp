#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int klass;
	cout << "Введите номер вашего класса (от 1 до 4): ";
	cin >> klass;
	switch (klass) {
	case 1:
		cout << "Команда Зеленых!" << endl;
		break;
	case 2:
		cout << "Команда Красных!" << endl;
		break;
	case 3:
		cout << "Команда Синих!" << endl;
		break;
	case 4:
		cout << "Команда Желтых!" << endl;
		break;
	default:
		cout << "Неверный номер класса!" << endl;
		break;
	}
	return 0;
}
