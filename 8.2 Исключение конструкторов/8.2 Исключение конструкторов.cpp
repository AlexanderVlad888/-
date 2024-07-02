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
#include "MyClassException.h"




// функция для вывода информации
void print_info(Figure& figure) {
    std::cout << figure.get_name();
        /*if (figure.check()) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон: " << figure.get_sides_count() << std::endl;*/
    figure.get_info();
    std::cout << std::endl;
}


int main() {

    setlocale(LC_ALL, "Russian");


    
        
    try {
        Triangle t1(3, 4, 5, 60, 60, 60);
        print_info(t1);
    }
    catch (MyClassException& d) {
        std::cout << d.what() << std::endl;
    }

    try {
        Triangle90 t90(3, 4, 5, 34.0f, 56.0f);
        print_info(t90);

    }
    catch (MyClassException& d) {
        std::cout << d.what() << std::endl;
    }

    try {
        TriangleAC_ac tAC(3, 4, 30.0f);
        print_info(tAC);

    }
    catch (MyClassException& d) {
        std::cout  << d.what() << std::endl;
    }

    try {
        TriangleABC tABC(3);
        print_info(tABC);
    }

    catch (MyClassException& d) {
        std::cout << d.what() << std::endl;
    }

    try {
        Quadrangle q1(3, 4, 5, 6, 90, 90, 90, 90);
        print_info(q1);
    }
    catch (MyClassException& d) {
        std::cout  << d.what() << std::endl;
    }

    try {
        Quadrangle90 q90(3, 4);
        print_info(q90);

    }
    catch (MyClassException& d) {
        std::cout << d.what() << std::endl;
    }

    try {
        Quadrat qt(12);
        print_info(qt);

    }
    catch (MyClassException& d) {
        std::cout << d.what() << std::endl;
    }

    try {
        Romb r(7, 40.0f);
        print_info(r);

    }
    catch (MyClassException& d) {
        std::cout << d.what() << std::endl;
    }

    try {
        Parallellogram p(3, 8, 54.0f);
        print_info(p);

    }
    catch (MyClassException& d) {
        std::cout  << d.what() << std::endl;
    }
        

       

        

        

        

    

    


    return 0;
}