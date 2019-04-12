//g++ show_byte.cpp

//头文件默认在/usr/include
//库文件默认在/usr/lib中

//如果在外面 -I or (-L  -l)

#include <iostream>
#include <climits>

int main(int argc,char** argv){
	std::cout << sizeof(short) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(long) << std::endl;
	std::cout << sizeof(long long) << std::endl;

	std::cout << INT_MAX << std::endl;
}
