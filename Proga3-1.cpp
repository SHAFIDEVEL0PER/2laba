#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� �����: ";
	cin >> n;
	if (n > 0) {
		cout << "��������� ����� ������������" << endl;
	}
	else if (n < 0) {
		cout << "��������� ����� ������������" << endl;
	}
	else {
		cout << "��������� ����� ����� ����" << endl;
	}
	return 0;
}
