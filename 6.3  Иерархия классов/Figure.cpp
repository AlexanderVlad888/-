#include <iostream>
#include "Figure.h"


int Figure::get_sides_count() { return sides_count; };
std::string Figure::get_name() { return name; };
void Figure::set_name(std::string name) { this->name = name; };
void Figure::get_info() {
    std::cout << "Количество сторон: " << sides_count << std::endl;
};
bool Figure::check() {
    if (sides_count == 0) {
        return true;
    }
    return false;
};

// Создание разных конструкторов
Figure::Figure() : name("Фигура"), sides_count(0) {/*name = "Фигура";*/ }; // создание конструктора по умолчанию
Figure::Figure(int sides_count) : sides_count(sides_count) {} // 1-й вариант для наследников
Figure::Figure(std::string name, int sides_count) : name(name), sides_count(sides_count) {}
