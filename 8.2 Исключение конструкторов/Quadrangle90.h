#pragma once
#include "Quadrangle.h"


//создаем прямоугольник
class Quadrangle90 : public Quadrangle {
public:
	Quadrangle90(int a, int b);

	bool check() override;

};