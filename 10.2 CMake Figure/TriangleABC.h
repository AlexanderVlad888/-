#pragma once
#include "Triangle.h"

//создаем равносторонний треугольник
class TriangleABC : public Triangle {
public:
	TriangleABC(int a);
	bool check() override;

};


