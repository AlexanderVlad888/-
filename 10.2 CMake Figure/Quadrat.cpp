#include "Quadrat.h"
//создаем квадрат

Quadrat::Quadrat(int a) : Quadrangle90(a, a) { set_name(" вадрат"); }

bool Quadrat::check() {
    if (get_c() == get_b() && Quadrangle90::check()) {
        return true;
    }
    return false;
}
