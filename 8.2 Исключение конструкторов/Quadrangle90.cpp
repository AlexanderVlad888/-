#include "Quadrangle90.h"

//создаем прямоугольник

Quadrangle90::Quadrangle90(int a, int b) : Quadrangle(a, b) {
    if (sides_count != 4) {
        throw "Ошибка создания фигуры Равносторонний треугольник. Причина: сумма углов не равна 180.\n";
    }


}

bool Quadrangle90::check() {
    if (get_C() == 90.f && get_A() == 90.f && get_B() == 90.f && get_D() == 90.f && get_a() == get_c() && get_b() == get_d() && Quadrangle::check()) {
        return true;
    }
    return false;
}
