#pragma once
#include "Quadrangle90.h"
//создаем квадрат
class Quadrat : public Quadrangle90 {
public:
	Quadrat(int a);

	bool check() override;
};