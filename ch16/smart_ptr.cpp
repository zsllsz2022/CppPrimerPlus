

#include <iostream>

using namespace std;


class Test{
private:
	double test_;
public:
	Test(double test=0){
		test_ = test;
		cout << "Test Object created" << endl;	
	}
	double get_value()const{
		return test_;
	}
	
	~Test(){
		cout << "dtor" << endl;	
	}
};

template<typename T>
class Pointer_like{
private:
	T* p;

public:
	explicit Pointer_like(T* t){
		p = t;
	}

	T operator*(){
		cout << "operator*" << endl;
		return *p;
	}
	

	//->会传递.....why???
	T* operator->(){
		cout << "operator->" << endl;
		return p;
	}
	
	~Pointer_like(){
		delete p;	
	}
	
};


int main(int argc,char** argv){

	//std::shared_ptr<double> p = new double(666);	
	
	Pointer_like<double> p(new double(666.66));
	cout << *p << endl;


	//Pointer_like<Test> p_test_error = new Test(88.88); //error implicit
	Pointer_like<Test> p_test(new Test(88.88));

	cout << p_test->get_value() << endl;
	
	return 0;
}
