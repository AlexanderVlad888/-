#pragma once
#include "Quadrangle.h"
//סמחהאול ןאנאככוכמדנאלל
class Parallellogram : public Quadrangle {
public:
	Parallellogram(int a, int b, float A);
	bool check() override;
};

