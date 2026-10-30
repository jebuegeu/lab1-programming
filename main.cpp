#include <iostream>
#include <iomanip>

int main() {
    int hours, minutes, seconds;
    
    std::cout << "Введите часы: ";
    std::cin >> hours;
    std::cout << "Введите минуты: ";
    std::cin >> minutes;
    std::cout << "Введите секунды: ";
    std::cin >> seconds;

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    std::cout << "Общее количество секунд: " << totalSeconds << "\n";
    
    return 0;
}