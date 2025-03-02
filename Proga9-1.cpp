#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>

std::string getMonthName(int month) {
    const std::vector<std::string> months = {
        "Январь", "Февраль", "Март", "Апрель",
        "Май", "Июнь", "Июль", "Август",
        "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };
    return months[month - 1];
}

int main() {
    setlocale(LC_ALL, "RUS");
    std::string input_date;
    std::cout << "Введите дату в формате ДД/ММ/ГГ: ";
    std::getline(std::cin, input_date);

    int day, month, year;
    char delimiter1, delimiter2;

    std::stringstream date_stream(input_date);
    date_stream >> day >> delimiter1 >> month >> delimiter2 >> year;

    if (delimiter1 != '/' || delimiter2 != '/') {
        std::cerr << "Ошибка: Неправильный формат даты! Используйте ДД/ММ/ГГ." << std::endl;
        return 1;
    }

    if (year < 100) {
        year += 2000;
    }

    std::cout << "Дата в формате 'Месяц ДД, ГГГГ': "
        << getMonthName(month) << " " << std::setw(2) << std::setfill('0') << day
        << ", " << year << std::endl;

    return 0;
}