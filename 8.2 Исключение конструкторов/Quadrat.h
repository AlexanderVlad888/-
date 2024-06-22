#pragma once
#include "Quadrangle.h"
//создаем квадрат
class Quadrat : public Quadrangle {
public:
	Quadrat(int a);
	Quadrat(int a, float A);

	bool check() override;
};