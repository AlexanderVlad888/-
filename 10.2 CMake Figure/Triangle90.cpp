#include "Triangle90.h"

//создаем прямоугольный треугольник

Triangle90::Triangle90(int a, int b, int c, float A, float B) : Triangle(a, b, c, A, B) {}

bool Triangle90::check() {
    if (get_C() == 90.f && Triangle::check()) {
        return true;
    }
    return false;
}