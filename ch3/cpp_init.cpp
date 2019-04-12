// g++ cpp_init.cpp  -> extended initializer lists only available with -std=c++11 or -std=gnu++11

//so g++ cpp_init -std=c++11


#include <iostream>

int main(int argc,char** argv){
	int int_value_c = 666;
	int int_value_cpp(888);
	int int_value_cpp_2{999};
	int int_value_cpp_3 = {111};
	int int_value_cpp_4 = {};//大括号内可以不包含任何东西，初始化为0
	std::cout << int_value_c << std::endl;
	std::cout << int_value_cpp << std::endl;
	std::cout << int_value_cpp_2 << std::endl;
	std::cout << int_value_cpp_3 << std::endl;
	std::cout << int_value_cpp_4 << std::endl;
}
