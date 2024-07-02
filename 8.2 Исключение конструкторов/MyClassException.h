#pragma once
#include <exception>
#include <iostream>

class MyClassException : public std::exception

{
public:
	std::string name;
   
    MyClassException(const std::string& name);
    const char* what() const throw() override;
};



