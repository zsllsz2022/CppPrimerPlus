#include "stock.h"


Stock::Stock(){
	std::cout << "ctor in default" << std::endl;
	co_ = "none";
	num_ = 0;
	price_ = 0.0;
	total_ = 0.0;
}

Stock::Stock(std::string company,long num,double price):
	co_(company),num_(num),price_(price){
	std::cout << "ctor" << std::endl;
	set_total();
}

