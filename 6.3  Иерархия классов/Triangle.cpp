#include "Triangle.h"
#include "Figure.h"
#include <iostream>

Triangle::Triangle() : Figure("�����������", 3) {}  // ��� 2-��� ��������. ����� ��������)
Triangle::Triangle(int a, int b, int c, float A, float B, float C) : Figure("�����������", 3), a(a), b(b), c(c), A(A), B(B), C(C) {}
Triangle::Triangle(int a, int b, int c, float A, float B) : Figure("������������� �����������", 3) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    C = 180 - A - B;
}
Triangle::Triangle(int a, int b, float A) : Figure("�������������� �����������", 3) {
    this->a = a;
    this->b = b;
    c = a;
    this->A = A;
    this->B = 180 - A * 2;
    C = A;
}
Triangle::Triangle(int a) : Figure("�������������� �����������", 3) {
    this->a = a;
    b = c = a;
    A = B = C = 60;
}

void Triangle::get_info() {
    std::cout << "�������: " << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << std::endl;
    std::cout << "����: " << "A = " << A << ", " << "B = " << B << ", " << "C = " << C << std::endl;
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
