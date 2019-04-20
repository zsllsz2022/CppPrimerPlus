
#include <string>
#include <iostream>

class Stock{
private:
	std::string co_;
	long num_;
	double price_;
	double total_;
	void set_total(){ total_ = price_ * num_;}
	
public:
	Stock();
	Stock(std::string company,long num = 0,double price = 0);
	virtual ~Stock(){}

	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	void show()const;
};
