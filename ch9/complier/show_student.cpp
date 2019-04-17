#include "student.h"
#include <iostream>

void show(const student& s){
	std::cout << "name:" << s.name << std::endl;
	std::cout << "age:" << s.age << std::endl;
}
