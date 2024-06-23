#pragma once
#include <iostream>
#include "Figure.h"


class Quadrangle : public Figure
{
private:
    int a, b, c, d;
    float A, B, C, D;
public:

    Quadrangle(int a, int b);
    Quadrangle(int a);
    Quadrangle(int a, int b, float A);
    Quadrangle(int a, int b, int c, int d, float A, float B, float C, float D);

    // Переопределение метода
    void get_info() override;

    bool check() override;
    float get_C();
    float get_A();
    float get_B();
    float get_D();
    int get_a();
    int get_c();
    int get_b();
    int get_d();

    //метод установки значений углов многоугольника
    void set_Anle(float A, float B, float C, float D);
};