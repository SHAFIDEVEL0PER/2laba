#include <iostream>
#include <string>

class MARSH {
public:
    int Number;
    std::string Start;
    std::string End;

    void Information() const {
        std::cout << "Номер маршрута: " << Number << std::endl;
        std::cout << "Начальный пункт маршрута: " << Start << std::endl;
        std::cout << "Конечный пункт маршрута: " << End << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    MARSH massiv[8];

    std::cout << "Введите все маршруты (номер, начальный пункт, конечный пункт): " << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << "Маршрут " << (i + 1) << ": ";
        std::cin >> massiv[i].Number;
        std::cin.ignore();

        std::cout << "Начальный пункт: ";
        std::getline(std::cin, massiv[i].Start);

        std::cout << "Конечный пункт: ";
        std::getline(std::cin, massiv[i].End);
    }

    std::cout << "Введите необходимый номер маршрута: ";
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
        std::cout << "Маршрутов с таким номером не существует!" << std::endl;
    }

    return 0;
}