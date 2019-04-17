#include <iostream>

double algorithm_one(int line){
	return 1.5 * line;
}

double algorithm_two(int line){
	return 0.03 * line + line * line * 0.04;
}


double get_time(int line,double(*f_p)(int)){
	return (*f_p)(line);
}


int main(int argc,char** argv){

	int input;
	std::cout << "please input a number:";
	std::cin >> input;
	
	std::cout << "one = " << get_time(input,algorithm_one) << std::endl;
	std::cout << "two = " << get_time(input,algorithm_two) << std::endl;

	return 0;
}
