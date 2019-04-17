#include <iostream>

int main(int argc,char** argv){
	int test = 100;
	int& ref_test = test;
	
	std::cout << test << " " << ref_test << std::endl;
	
	test++;

	std::cout << test << " " << ref_test << std::endl;
	
	ref_test++;

	std::cout << test << " " << ref_test << std::endl;
	
	std::cout << &test << " " << &ref_test << std::endl; //相同的地址 -> 别名

	return 0;
}
