#include "Parallellogram.h"

//סמחהאול ןאנאככוכמדנאלל

Parallellogram::Parallellogram(int a, int b, float A) : Quadrangle(a, b, A) {}
bool Parallellogram::check() {
    if (get_a() == get_c() && get_b() == get_d() && get_A() == get_C() && get_B() == get_D() && Quadrangle::check()) {
        return true;
    }
    return false;
}
