#pragma once
#include "Triangle.h"

//������� �������������� �����������
class TriangleAC_ac : public Triangle {
public:
	TriangleAC_ac(int a, int b, float A);

	bool check() override;
};

