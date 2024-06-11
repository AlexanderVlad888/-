#include <iostream>
#include "math.h"

void input() {
    int a, b, c;
    std::cout << "Вас приветсвует задача Математические функции\nВведите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;
    switch (c) {
    case 1:
        std::cout << "Сумма: " << sum(a, b) << std::endl;
        break;
    case 2:
        std::cout << "Разность: " << sub(a, b) << std::endl;
        break;
    case 3:
        std::cout << "Произведение: " << mul(a, b) << std::endl;
        break;
    case 4:
        std::cout << "Частное: " << div1(a, b) << std::endl;
        break;
    case 5:
        std::cout << "Возведение в степень: " << pow(a, b) << std::endl;
        break;
    default:
        std::cout << "Неверный ввод" << std::endl;
        break;
    }
}


int main() {

    setlocale(LC_ALL, "Russian");

    input();



    return 0;
}
