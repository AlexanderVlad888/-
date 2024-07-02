#include "Triangle.h"
#include "Figure.h"
#include <iostream>
#include "MyClassException.h"

   // Triangle::Triangle() : Figure("�����������", 3) {}  // ��� 2-��� ��������. ����� ��������)
    Triangle::Triangle(int a, int b, int c, float A, float B, float C) : Figure("�����������", 3), a(a), b(b), c(c), A(A), B(B), C(C) {
    
        if (A + B + C != 180) {
            throw MyClassException("������ �������� ������ �����������. �������: ����� ����� �� ����� 180.");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
             throw MyClassException("������ �������� ������ �����������. �������: ������� ������������ ������ ���� ������ 0.");
        }
        
    
    }
    Triangle::Triangle(int a, int b, int c, float A, float B) : Figure("������������� �����������", 3) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 91;
        if (C != 90) {
            throw MyClassException("������������� ����������� �� ������. ���� � ������ ���� 90 ��������");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
             throw MyClassException("������ �������� ������ ������������� �����������. �������: ������� ������������ ������ ���� ������ 0.");
        }
        if (sides_count != 3) {
            throw MyClassException("������ �������� ������ ������������� �����������.�������: ���������� ������ ������������ ������ ���� ������ 3.");
        };
    }
    Triangle::Triangle(int a, int b, float A) : Figure("�������������� �����������", 4) {
        this->a = a;
        this->b = b;
        c = a;
        this->A = A;
        this->B = 180 - A * 2;
        C = A;
        if (A + B + C != 180) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ����� ����� �� ����� 180.");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
             throw MyClassException("������ �������� ������  �������������� �����������. �������: ������� ������������ ������ ���� ������ 0.");
        }
        if (sides_count != 3) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ���������� ������ ������������ ������ ���� ������ 3.");
        };
        if (a != c) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ������� a � � �� �����.");
         };
        if (C != A) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ���� � � � �� �����.");
        };
    }
    Triangle::Triangle(int a) : Figure("�������������� �����������", 3) {
        this->a = a;
        b = c = a;
        A = 61;
        B = 60;
        C = 61;
        if (A + B + C != 180) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ����� ����� �� ����� 180.");
        }
        if (a <= 0 || b <= 0 || c <= 0) {
            throw MyClassException("������ �������� ������  �������������� �����������. �������: ������� ������������ ������ ���� ������ 0.");
        }
        if (sides_count != 3) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ���������� ������ ������������ ������ ���� ������ 3.");
        };
        if (a != c && a != b) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ������� �� �����.");
        };
        if (C != A && C != B) {
            throw MyClassException("������ �������� ������ �������������� �����������. �������: ���� �� �����.");
        };
    }


void Triangle::get_info() {
    std::cout << "(�������: " << "" << a << ", " << "" << b << ", " << "" << c ;
    std::cout << " ����: " << "" << A << ", " << "" << B << ", " << "" << C <<  ") ������." << std::endl;
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
