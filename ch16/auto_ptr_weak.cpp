//g++ auto_ptr_weak.cpp


#include <iostream>
#include <memory>


int main(int argc,char** argv){
	
	
	std::auto_ptr<double> p_double(new double(666.66));
	std::cout << *p_double << std::endl;
	
	{
		double* test = new double(888.88);
		double test_again = 999.99;
		//std::auto_ptr<double> p_double_again = test; //error explicit but implicit
		//std::auto_ptr<double> p_double_again_again(test_again);//智能指针需要指向由new分配的内存
		std::auto_ptr<double> p_double_again(test);  //right 
		std::auto_ptr<double> p_double_three = p_double;
	}
	std::cout << *p_double << std::endl;//complier but segment error -> 内存已经被释放
}
