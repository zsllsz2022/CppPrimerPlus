//abort仍然是直接终止程序

#include <iostream>
#include <cstdlib>
int main(int argc,char** argv){
	
	std::cout << "before" << std::endl;
	int a = 5;
	int b = 0;
	
	if(b == 0)
		std::abort();//在本人环境下程序崩溃，没有任何提示
	std::cout << a / b << std::endl;
	std::cout << "after" << std::endl;
	
	return 0;
}
