#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int klass;
	cout << "������� ����� ������ ������ (�� 1 �� 4): ";
	cin >> klass;
	switch (klass) {
	case 1:
		cout << "������� �������!" << endl;
		break;
	case 2:
		cout << "������� �������!" << endl;
		break;
	case 3:
		cout << "������� �����!" << endl;
		break;
	case 4:
		cout << "������� ������!" << endl;
		break;
	default:
		cout << "�������� ����� ������!" << endl;
		break;
	}
	return 0;
}
