#include <iostream>

int main(){
	
	union test{
		double one;
		int    two;	
	}test;
	test.one = 666.66;
	std::cout << test.one << std::endl;
	test.two = 777;
	std::cout << test.one << std::endl;
	std::cout << test.two << std::endl;
	
	return 0;
}
