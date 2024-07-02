#include "MyClassException.h"
#include <iostream>
#include <string>




MyClassException::MyClassException(const std::string& name) : name(name) {}//создаем конструктор
    const char* MyClassException::what() const throw() // переопределяем метод из std::exception
    {
        return name.c_str();     // получаем из std::string строку const char*
    }
    
    
    