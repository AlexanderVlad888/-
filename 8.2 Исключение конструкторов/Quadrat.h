#pragma once
#include "Quadrangle.h"
//������� �������
class Quadrat : public Quadrangle {
public:
	Quadrat(int a);
	Quadrat(int a, float A);

	bool check() override;
};