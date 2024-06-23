#include <iostream>
#include "Figure.h"
#include "Quadrangle.h"


Quadrangle::Quadrangle(int a, int b) : Figure("Прямоугольник", 4) {
    this->a = a;
    this->b = b;
    c = a;
    d = b;
    A = B = C = D = 90;
}
Quadrangle::Quadrangle(int a) : Figure("Квадрат", 4) {
    this->a = a;
    b = c = d = a;
    A = B = C = D = 90;
}
Quadrangle::Quadrangle(int a, int b, float A) : Figure("Параллелограмм", 4) {
    this->a = a;
    this->b = b;
    c = a;
    d = b;
    this->A = A;
    C = A;
    B = (360 - A * 2) / 2;
    D = B;
}
Quadrangle::Quadrangle(int a, int b, int c, int d, float A, float B, float C, float D) : Figure("Четырёхугольник", 4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

// Переопределение метода
void Quadrangle::get_info() {
    std::cout << "Стороны: " << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << " d = " << d << std::endl;
    std::cout << "Углы: " << "A = " << A << ", " << "B = " << B << ", " << "C = " << C << " D = " << D << std::endl;
}

bool Quadrangle::check() {
    if (A + B + C + D == 360 && get_sides_count() == 4) {
        return true;
    }
    return false;
}
float Quadrangle::get_C() {
    return C;
}
float Quadrangle::get_A() {
    return A;
}
float Quadrangle::get_B() {
    return B;
}
float Quadrangle::get_D() {
    return D;
}
int Quadrangle::get_a() {
    return a;
}
int Quadrangle::get_c() {
    return c;
}
int Quadrangle::get_b() {
    return b;
}
int Quadrangle::get_d() {
    return d;
}

//метод установки значений углов многоугольника
void Quadrangle::set_Anle(float A, float B, float C, float D) {
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}


