#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 0;
	int i = 0;
	do {
		cout << "������� �������: " << array[i] << endl;
		sum += array[i];
		i++;
		cout << "����� ��������� �������: " << sum << endl;
	} while (sum < 32);
	return 0;
}
