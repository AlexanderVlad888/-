#pragma once
#include "Quadrat.h"
//������� ����
class Romb : public Quadrat {
public:
	Romb(int a, float A);
	bool check() override;
};

