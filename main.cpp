#include <iostream>

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "Число " << number << " - чётное\n";
    } else {
        std::cout << "Число " << number << " - нечётное\n";
    }

    // Дополнительно:
    if (number % 3 == 0) {
        std::cout << "Число " << number << " – делится на 3\n";
    } else {
        std::cout << "Число " << number << " – не делится на 3\n";
    }

    if (number > 0) {
        std::cout << "Число положительное\n";
    } else if (number < 0) {
        std::cout << "Число отрицательное\n";
    } else {
        std::cout << "Число равно нулю\n";
    }

    return 0;
}
