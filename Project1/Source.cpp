#include <iostream>
#include <bitset>
#include <iomanip>

int main() {
    
    unsigned int X;

    // Ввод числа
    std::cout << "Введите десятичное неотрицательное целое число: ";
    std::cin >> X;

    // Вывод числа в разных форматах
    std::cout << "| dec   | 8 осн | hex  | двоичный            |" << std::endl;
    std::cout << "|-------|-------|------|--------------------|" << std::endl;

    // Вывод исходного числа
    std::cout << "| " << std::setw(6) << X << " | "
        << std::oct << std::setw(6) << X << " | "
        << std::hex << std::setw(4) << X << " | "
        << std::bitset<16>(X) << " |" << std::endl;

    // Увеличение числа на 1
    X += 1;

    // Вывод результата
    std::cout << "| " << std::dec << std::setw(6) << X << " | "
        << std::oct << std::setw(6) << X << " | "
        << std::hex << std::setw(4) << X << " | "
        << std::bitset<16>(X) << " |" << std::endl;

    return 0;
}
