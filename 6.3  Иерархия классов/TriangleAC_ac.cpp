#include "TriangleAC_ac.h"

//������� �������������� �����������


TriangleAC_ac::TriangleAC_ac(int a, int b, float A) : Triangle(a, b, A) {}

bool TriangleAC_ac::check() {
    if (get_C() == get_A() && get_C() == get_A() && Triangle::check()) {
        return true;
    }
    return false;
}