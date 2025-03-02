#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "RUS");
    int quantityElements;
    std::cout << "������� ���������� ��������� �������: ";
    std::cin >> quantityElements;

    std::vector<double> arr(quantityElements);
    std::cout << "������� �������� �������: ";
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
    std::cout << "����� ������������� ���������: " << negativesSum << std::endl;
    std::cout << "����� ��������� ����� ������� ������: " << sumBetweenZeros << std::endl;
    std::cout << "������������� ������: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}