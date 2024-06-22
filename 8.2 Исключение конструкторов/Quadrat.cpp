#include "Quadrat.h"
//создаем квадрат

Quadrat::Quadrat(int a) : Quadrangle(a) { 
   // set_name(" вадрат");

}

Quadrat::Quadrat(int a, float A) : Quadrangle(a, a, A, (360-A*2)/2) {}

bool Quadrat::check() {
    if (get_c() == get_b() && Quadrangle::check()) {
        return true;
    }
    return false;
}
