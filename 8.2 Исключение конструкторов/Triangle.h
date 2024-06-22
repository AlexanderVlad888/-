#pragma once
//#include <iostream>
#include "Figure.h"

class Triangle : public Figure
{
private:
    int a, b, c;   // ������� ������������
    float A, B, C;  // ���� ������������
public:
    //Triangle() : Figure(3) { set_name("�����������" ); }      // ��� 1-��� ��������
    Triangle();
    Triangle(int a, int b, int c, float A, float B, float C);
    Triangle(int a, int b, int c, float A, float B);
    Triangle(int a, int b, float A);
    Triangle(int a);

    void get_info() override;
    bool check() override;
    float get_C();
    float get_A();
    int get_a();
    int get_c();
    int get_b();
    float get_B();
};

