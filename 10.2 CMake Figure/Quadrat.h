#pragma once
#include "Quadrangle90.h"
//������� �������
class Quadrat : public Quadrangle90 {
public:
	Quadrat(int a);

	bool check() override;
};