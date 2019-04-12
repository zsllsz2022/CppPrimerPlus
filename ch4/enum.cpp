#include <iostream>


int main(int argc,char** argv){
	
	enum color{RED,BLUE,GREEN,BLACK,WHITE};
	
	std::cout << RED << std::endl;

	enum color myColor;
	myColor = color(3);//valid
	std::cout << myColor << std::endl;
	//myColor = 3;//invalid
	return 0;
}
