#include "MyClassException.h"
#include <iostream>
#include <string>




MyClassException::MyClassException(const std::string& name) : name(name) {}//������� �����������
    const char* MyClassException::what() const throw() // �������������� ����� �� std::exception
    {
        return name.c_str();     // �������� �� std::string ������ const char*
    }
    
    
    