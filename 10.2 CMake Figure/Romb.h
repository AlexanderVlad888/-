#pragma once
#include "Quadrat.h"
//создаем ромб
class Romb : public Quadrat {
public:
	Romb(int a, float A);
	bool check() override;
};

