#include "Romb.h"
//создаем ромб

Romb::Romb(int a, float A) : Quadrat(a, A) {
    set_name("Ромб");
    set_Anle(A, (360 - 2 * A) / 2, A, (360 - 2 * A) / 2);
}
bool Romb::check() {
    if (get_a() == get_c() && get_b() == get_d() && get_a() == get_b() && get_A() == get_C() && get_B() == get_D() && Quadrangle::check()) {
        return true;
    }
    return false;
}
