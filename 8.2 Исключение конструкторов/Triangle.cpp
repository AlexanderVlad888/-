#include "Triangle.h"
#include "Figure.h"
#include <iostream>
#include "MyClassException.h"

   // Triangle::Triangle() : Figure("Треугольник", 3) {}  // для 2-ого варианта. Более красивый)
    Triangle::Triangle(int a, int b, int c, float A, float B, float C) : Figure("Треугольник", 3), a(a), b(b), c(c), A(A), B(B), C(C) {
    
        if (A + B + C != 180) {
            throw MyClassException("Ошибка создания фигуры треугольник. Причина: сумма углов не равна 180.");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
             throw MyClassException("Ошибка создания фигуры треугольник. Причина: стороны треугольника должны быть больше 0.");
        }
        
    
    }
    Triangle::Triangle(int a, int b, int c, float A, float B) : Figure("Прямоугольный треугольник", 3) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 91;
        if (C != 90) {
            throw MyClassException("Прямоугольный треугольник не создан. Угол С должен быть 90 градусов");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
             throw MyClassException("Ошибка создания фигуры Прямоугольный треугольник. Причина: стороны треугольника должны быть больше 0.");
        }
        if (sides_count != 3) {
            throw MyClassException("Ошибка создания фигуры Прямоугольный треугольник.Причина: количество сторон треугольника должно быть равным 3.");
        };
    }
    Triangle::Triangle(int a, int b, float A) : Figure("Равнобедренный треугольник", 4) {
        this->a = a;
        this->b = b;
        c = a;
        this->A = A;
        this->B = 180 - A * 2;
        C = A;
        if (A + B + C != 180) {
            throw MyClassException("Ошибка создания фигуры Равнобедренный треугольник. Причина: сумма углов не равна 180.");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
             throw MyClassException("Ошибка создания фигуры  Равнобедренный треугольник. Причина: стороны треугольника должны быть больше 0.");
        }
        if (sides_count != 3) {
            throw MyClassException("Ошибка создания фигуры Равнобедренный треугольник. Причина: количество сторон треугольника должно быть равным 3.");
        };
        if (a != c) {
            throw MyClassException("Ошибка создания фигуры Равнобедренный треугольник. Причина: стороны a и с не равны.");
         };
        if (C != A) {
            throw MyClassException("Ошибка создания фигуры Равнобедренный треугольник. Причина: углы А и С не равны.");
        };
    }
    Triangle::Triangle(int a) : Figure("Равносторонний треугольник", 3) {
        this->a = a;
        b = c = a;
        A = 61;
        B = 60;
        C = 61;
        if (A + B + C != 180) {
            throw MyClassException("Ошибка создания фигуры Равносторонний треугольник. Причина: сумма углов не равна 180.");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
            throw MyClassException("Ошибка создания фигуры  Равносторонний треугольник. Причина: стороны треугольника должны быть больше 0.");
        }
        if (sides_count != 3) {
            throw MyClassException("Ошибка создания фигуры Равносторонний треугольник. Причина: количество сторон треугольника должно быть равным 3.");
        };
        if (a != c && a != b) {
            throw MyClassException("Ошибка создания фигуры Равносторонний треугольник. Причина: стороны не равны.");
        };
        if (C != A && C != B) {
            throw MyClassException("Ошибка создания фигуры Равносторонний треугольник. Причина: углы не равны.");
        };
    }


void Triangle::get_info() {
    std::cout << "(стороны: " << "" << a << ", " << "" << b << ", " << "" << c ;
    std::cout << " углы: " << "" << A << ", " << "" << B << ", " << "" << C <<  ") создан." << std::endl;
}
bool Triangle::check() {
    if (A + B + C == 180 && get_sides_count() == 3) {
        return true;
    }
    return false;
}
float Triangle::get_C() {
    return C;
}
float Triangle::get_A() {
    return A;
}
int Triangle::get_a() {
    return a;
}
int Triangle::get_c() {
    return c;
}
int Triangle::get_b() {
    return b;
}
float Triangle::get_B() {
    return B;
}
