#include "TriangleABC.h"

//создаем равносторонний треугольник
TriangleABC::TriangleABC(int a) : Triangle(a) {}
bool TriangleABC::check() {
    if (get_C() == get_A() && get_A() == get_B() && get_a() == get_b() && get_a() == get_c() && Triangle::check()) {
        return true;
    }
    return false;
}