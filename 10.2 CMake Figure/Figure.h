#pragma once
#include <iostream>

class Figure {
private:
	std::string name;

protected:
	int sides_count;

public:
	int get_sides_count();
	std::string get_name();
	void set_name(std::string name);
	virtual void get_info();
	virtual bool check();

	// Создание разных конструкторов
	Figure();
	Figure(int sides_count);
	Figure(std::string name, int sides_count);


};

