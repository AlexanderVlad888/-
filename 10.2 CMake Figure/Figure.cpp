#include <iostream>
#include "Figure.h"


int Figure::get_sides_count() { return sides_count; };
std::string Figure::get_name() { return name; };
void Figure::set_name(std::string name) { this->name = name; };
void Figure::get_info() {
    std::cout << "���������� ������: " << sides_count << std::endl;
};
bool Figure::check() {
    if (sides_count == 0) {
        return true;
    }
    return false;
};

// �������� ������ �������������
Figure::Figure() : name("������"), sides_count(0) {/*name = "������";*/ }; // �������� ������������ �� ���������
Figure::Figure(int sides_count) : sides_count(sides_count) {} // 1-� ������� ��� �����������
Figure::Figure(std::string name, int sides_count) : name(name), sides_count(sides_count) {}
