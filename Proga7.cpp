#include <iostream>
#include <string>

class MARSH {
public:
    int Number;
    std::string Start;
    std::string End;

    void Information() const {
        std::cout << "����� ��������: " << Number << std::endl;
        std::cout << "��������� ����� ��������: " << Start << std::endl;
        std::cout << "�������� ����� ��������: " << End << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    MARSH massiv[8];

    std::cout << "������� ��� �������� (�����, ��������� �����, �������� �����): " << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << "������� " << (i + 1) << ": ";
        std::cin >> massiv[i].Number;
        std::cin.ignore();

        std::cout << "��������� �����: ";
        std::getline(std::cin, massiv[i].Start);

        std::cout << "�������� �����: ";
        std::getline(std::cin, massiv[i].End);
    }

    std::cout << "������� ����������� ����� ��������: ";
    int numberRoute;
    std::cin >> numberRoute;

    bool found = false;
    for (int i = 0; i < 8; i++) {
        if (massiv[i].Number == numberRoute) {
            massiv[i].Information();
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "��������� � ����� ������� �� ����������!" << std::endl;
    }

    return 0;
}