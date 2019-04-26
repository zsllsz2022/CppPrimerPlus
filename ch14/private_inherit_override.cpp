#include <iostream>

class Base{
public:
	virtual void test()const{
		std::cout << "i'm in base public" << std::endl;	
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
};


int main(int argc,char** argv){

	Derived derived;
	derived.show();	

	return 0;
}
