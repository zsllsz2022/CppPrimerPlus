#include <iostream>

class Base{
public:
	virtual void test()const{
		std::cout << "i'm in base public" << std::endl;	
	}
	
	void private_method()const{
		std::cout << "test using" << std::endl;	
	}
protected:
	void test_protected()const{
		std::cout << "i'm in base protected" << std::endl;	
	}
};


class Derived:private Base{
private:
	virtual void test()const{
		std::cout << "i'm in derived" << std::endl;	
	} 

public:
	void show()const{
		test();	
		Base::test();
		Base::test_protected();
	}

	using Base::private_method;//重新定义使用权限
};


int main(int argc,char** argv){

	Derived derived;
	derived.show();
	derived.private_method();

	return 0;
}

