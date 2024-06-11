#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "Triangle90.h"
#include "TriangleAC_ac.h"
#include "TriangleABC.h"
#include "Quadrangle90.h"
#include "Quadrat.h"
#include "Romb.h"
#include "Parallellogram.h"




// функция для вывода информации
void print_info(Figure& figure) {
    std::cout << figure.get_name() << ":" << std::endl;
    if (figure.check()) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон: " << figure.get_sides_count() << std::endl;
    figure.get_info();
    std::cout << std::endl;
}


int main() {

    setlocale(LC_ALL, "Russian");



    Triangle t1(3, 4, 5, 60, 60, 60);
    print_info(t1);

    Triangle90 t90(3, 4, 5, 34.0f, 56.0f);
    print_info(t90);

    TriangleAC_ac tAC(3, 4, 30.0f);
    print_info(tAC);

    TriangleABC tABC(3);
    print_info(tABC);

    Quadrangle q1(3, 4, 5, 6, 90, 90, 90, 90);
    print_info(q1);

    Quadrangle90 q90(3, 4);
    print_info(q90);

    Quadrat qt(12);
    print_info(qt);

    Romb r(7, 40.0f);
    print_info(r);

    Parallellogram p(3, 8, 54.0f);
    print_info(p);


    return 0;
}