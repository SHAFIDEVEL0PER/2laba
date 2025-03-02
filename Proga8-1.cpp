#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "RUS");
    int quantityElements;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> quantityElements;

    std::vector<double> arr(quantityElements);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < quantityElements; ++i) {
        std::cin >> arr[i];
    }

    double negativesSum = 0;
    for (const auto& elem : arr) {
        if (elem < 0) {
            negativesSum += elem;
        }
    }

    int firstZeroIndex = -1;
    int lastZeroIndex = -1;

    for (int i = 0; i < quantityElements; ++i) {
        if (arr[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            }
            lastZeroIndex = i;
        }
    }

    double sumBetweenZeros = 0;
    if (firstZeroIndex != -1 && lastZeroIndex != -1 && firstZeroIndex != lastZeroIndex) {
        for (int i = firstZeroIndex + 1; i < lastZeroIndex; ++i) {
            sumBetweenZeros += arr[i];
        }
    }

    std::sort(arr.begin(), arr.end());
    std::cout << "Сумма отрицательных элементов: " << negativesSum << std::endl;
    std::cout << "Сумма элементов между первыми нулями: " << sumBetweenZeros << std::endl;
    std::cout << "Упорядоченный массив: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}