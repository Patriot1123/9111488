﻿#include <iostream>

int main() {
    int n;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}