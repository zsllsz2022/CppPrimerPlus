#include <iostream>

int test = 8;

int main(int argc,char** argv){
	int test = 6;
	std::cout << test << std::endl;
	std::cout << ::test << std::endl;
}
