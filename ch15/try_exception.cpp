#include <iostream>
#include <cstdlib>

int main(int argc,char** argv){
	if(argc != 3){
		std::cout << "usage: ./a.out number1 number2" << std::endl;
		return 0;
	}	
	double a = std::atof(argv[1]);
	double b = std::atof(argv[2]);
	
	try{
		if(a == -b)
			throw "error:number1 + number2 == 0";
		std::cout << (a * b) / (a + b) << std::endl;
	}
	catch(const char* s){
		std::cout << s << std::endl;
		std::cout << "first" << std::endl;
	}
	catch(const char* s){ //只与第一个匹配
		std::cout << s << std::endl;
		std::cout << "second" << std::endl;	
	}

	if(a == b)
		throw "a == b";

	std::cout << "after exception" << std::endl;//异常之后继续执行
}
