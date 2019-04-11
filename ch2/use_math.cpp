
//g++ use_math.cpp
//or
//g++ use_math.cpp -lm 


#include <iostream>
#include <cmath>
#include <cstdlib>

int main(int argc,char** argv){
	double input = 625;
	double output = sqrt(input);
	std::cout << output << std::endl;

	std::cout << "please input a number:";
	std::cin >> input;
	std::cin.get();//丢弃换行
	std::cout << (output = pow(input,3)) << std::endl;
	//需要使用srand()来设置随机种子的值
	//否则只是假随机
	std::cout << rand() << " " << rand() << std::endl;
}
