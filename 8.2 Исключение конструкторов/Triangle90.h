#pragma once
#include "Triangle.h"

//������� ������������� �����������
class Triangle90 : public Triangle {
public:
	Triangle90(int a, int b, int c, float A, float B);

	bool check() override;
};

