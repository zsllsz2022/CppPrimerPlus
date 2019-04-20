#include <iostream>
#include "my_string.h"


int main(int argc,char** argv){
	
	String myString("helloworld!!!");
	std::cout <<myString << std::endl;
	
	String myString_1("a");
	String myString_2("b");
	String myString_3("c");
	
	std::cout << (myString_2 > myString_1) << std::endl;
	std::cout << (myString_2 > myString_3) << std::endl;
	std::cout << (myString_2 == myString_2) << std::endl;
	
	std::cout << myString[1] << std::endl;
	std::cout << myString << std::endl;
	myString[0] = 'Z';
	std::cout << myString << std::endl;
	std::cout << myString.length() << std::endl;
	
	myString = "hello China";
	std::cout << myString << std::endl;
	
	std::cout << String::public_rate << std::endl;
	String::public_rate = 888.888;
	std::cout << String::public_rate << std::endl;
	//std::cout << String::private_rate << std::endl; //private error --> access by public static function
	
	std::cout << String::get_private_rate() << std::endl;
	String::set_private_rate(99999.999);
	std::cout << String::get_private_rate() << std::endl;
	return 0;
}