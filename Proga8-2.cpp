#include <iostream>
#include <vector>
#include <limits>

int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    std::cout << "Введите размер квадратной матрицы (n x n): ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    std::cout << "Введите элементы матрицы:" << std::endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::vector<int> columnSums(n, 0);
    std::vector<bool> hasNegative(n, false);

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] < 0) {
                hasNegative[j] = true;
                break;
            }
        }
        if (!hasNegative[j]) {
            for (int i = 0; i < n; ++i) {
                columnSums[j] += matrix[i][j];
            }
        }
    }

    std::cout << "Сумма элементов в столбцах без отрицательных значений:" << std::endl;
    for (int j = 0; j < n; ++j) {
        if (!hasNegative[j]) {
            std::cout << "Столбец " << j + 1 << ": " << columnSums[j] << std::endl;
        }
    }

    int minSum = std::numeric_limits<int>::max();

    for (int k = -n + 1; k < n; ++k) {
        int currentSum = 0;
        for (int i = 0; i < n; ++i) {
            int j = n - 1 - i + k;
            if (j >= 0 && j < n) {
                currentSum += abs(matrix[i][j]);
            }
        }
        if (currentSum < minSum) {
            minSum = currentSum;
        }
    }

    std::cout << "Минимум среди сумм модулей элементов диагоналей, параллельных побочной диагонали: " << minSum << std::endl;
    return 0;
}