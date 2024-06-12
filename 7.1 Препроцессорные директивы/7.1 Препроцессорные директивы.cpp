#include <iostream>

#define MODE 15



#ifdef MODE
int add(int a, int b)
{
    return a + b;
}

#else 
#error MODE is not defined

#endif

int main() {

    setlocale(LC_ALL, "Russian");

#if MODE == 1
    int a, b;
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Сумма чисел: " << add(a, b) << std::endl;


#elif MODE == 0

    std::cout << "Работаю в режиме тренировки" << std::endl;

#else 
    std::cout << "Неизвестный режим" << std::endl;

#endif

}
