
//g++ get_address.cpp

// sizeof -> byte
// 8个字节的指针
// 即64位存储地址


#include <iostream>

int main(int argc,char** argv){

	int test = 5;
	std::cout << &test << std::endl;
	std::cout << sizeof(&test) << std::endl;

	return 0;
}
