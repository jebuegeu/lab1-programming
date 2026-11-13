#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;

    double maximum;
    if (a >= b && a >= c) {
        maximum = a;
    } else if (b >= a && b >= c) {
        maximum = b;
    } else {
        maximum = c;
    }

    std::cout << "Максимум: " << maximum << "\n";
    return 0;
}
