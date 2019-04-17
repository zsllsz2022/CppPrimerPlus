#include <iostream>

int main(int argc,char** argv){
	
	int var = 999;
	{
		int var = 666;
		std::cout << "in = " << var << std::endl;
	}
	std::cout << "out = " << var << std::endl;

	return 0;
}
