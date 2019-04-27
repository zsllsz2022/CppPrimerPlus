//定义和声明都需要noexcept
//如果声明了noexcept，但throw，程序会使用abort提示后崩溃
//C++11使用noexcept代替throw()

#include <iostream>
#include <cstdlib>

class bad_first{
public:
	void msg()const{
		std::cout << "i'm bad_first" << std::endl;	
	}
};

class bad_second{
public:
	void msg()const{
		std::cout << "i'm bad_second" << std::endl;
	}
};

void test_noexcept()noexcept;

void layout_three(double a,double b){
	std::cout << "in layout_three" << std::endl;
	if(a == b)
		throw bad_first();
	else if(a == -b)
		throw bad_second();
	std::cout << "success in layout_three()" << std::endl;
	std::cout << "out layout_three" << std::endl;
}

void layout_two(double a,double b){
	std::cout << "in layout_two" << std::endl;
	layout_three(a,b);
	std::cout << "out layout_two" << std::endl;
}


void layout_one(double a,double b){
	std::cout << "in layout_one" << std::endl;
	layout_two(a,b);
	std::cout << "out layout_one" << std::endl;
}


int main(int argc,char** argv){
	
	if(argc != 3){
		std::cout << "usage: ./a.out number1 number2" << std::endl;
		return 0;
	}	
	double number1 = std::atof(argv[1]);
	double number2 = std::atof(argv[2]);
	
	try{
		layout_one(number1,number2);
	}
	catch(bad_first& e){
		e.msg();
	}
	catch(bad_second& e){
		e.msg();
	}
	std::cout << "after exception" << std::endl;
	
	return 0;
}


void test_noexcept()noexcept{

}


