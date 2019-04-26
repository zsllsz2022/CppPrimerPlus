#include <iostream>

//公有继承，父类保护成员变成基类的保护成员
class Base{
private:

public:
	void show_protected(void)const{
		std::cout << "invoke in protected" << std::endl;	
	};
public:

};

class Derived:public Base{

};


int main(int argc,char** argv){
	
	Base base;
	//base.show_protected();
	
	Derived derived;
	derived.show_protected();
	return 0;
}
