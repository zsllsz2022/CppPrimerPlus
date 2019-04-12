

#include <iostream>

int main(int argc,char** argv){
	
	float number1,number2;	
	
	std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
	std::cout << "pleaset enter a number:";
	std::cin >> number1;
	std::cin.get();//drop enter
	std::cout << "enter another a number:";
	std::cin >> number2;
	std::cin.get();
	
	std::cout << "number1 = " << number1 << " number2 = " << number2 << std::endl;
	std::cout << number1 + number2 << std::endl;	
	std::cout << number1 - number2 << std::endl;
	std::cout << number1 * number2 << std::endl;
	std::cout << number1 / number2 << std::endl;

	return 0;
}
